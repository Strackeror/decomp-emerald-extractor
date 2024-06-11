use std::env;
use std::path::PathBuf;
fn main() {
    let decomp_path = PathBuf::from("pokeemerald-expansion");

    let include_paths = ["include", "src", "gflib"].map(|path| decomp_path.join(path));

    cc::Build::new()
        .includes(&include_paths)
        .compiler("clang")
        .file("wrapper.c")
        .warnings(false)
        .flag("-Wno-everything")
        .compile("pokeemerald");

    println!("cargo::rerun-if-changed=wrapper.c");

    let out_dir = PathBuf::from(env::var("OUT_DIR").unwrap());
    let bindings = bindgen::Builder::default()
        .clang_args(&[
            &format!("-I{}", decomp_path.join("include").display()),
            &format!("-I{}", decomp_path.join("src").display()),
            &format!("-I{}", decomp_path.join("gflib").display()),
        ])
        .header("wrapper.h")
        .derive_eq(true)
        .parse_callbacks(Box::new(bindgen::CargoCallbacks::new()))
        .generate()
        .unwrap();

    let constants_path = decomp_path.join("include/constants");
    let output_path = PathBuf::from("src/_constants.rs");
    let define_lists: &[(&str, &str, &[(bool, &str)])] = &[
        ("MapGroup", "map_groups.h", &[]),
        ("Type", "pokemon.h", &[(true, "TYPE_[A-Z_]+")]),
        (
            "EvoType",
            "pokemon.h",
            &[(true, "EVO_[A-Z_]+"), (false, "EVO_MODE.*")],
        ),
        (
            "DamageCategory",
            "pokemon.h",
            &[(true, "DAMAGE_CATEGORY_[A-Z_]+")],
        ),
        ("Species", "species.h", &[]),
    ];

    let mut constants_content = String::new();
    for (name, header, filters) in define_lists {
        let mut builder = bindgen::Builder::default();
        for (include, regex) in filters.iter() {
            builder = match include {
                true => builder.allowlist_item(regex),
                false => builder.blocklist_item(regex),
            }
        }
        let generated = builder
            .header(constants_path.join(header).display().to_string())
            .parse_callbacks(Box::new(bindgen::CargoCallbacks::new()))
            .generate()
            .unwrap()
            .to_string();
        let generated = format!("handle_constant_list!{{{}\n{}\n}}\n", name, generated);
        constants_content += &generated;
    }
    std::fs::write(output_path, constants_content).unwrap();

    bindings.write_to_file(out_dir.join("bindings.rs")).unwrap();
}
