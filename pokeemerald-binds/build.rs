use std::env;
use std::path::PathBuf;

type ConstantEntry = (&'static str, &'static str, &'static [(bool, &'static str)]);

fn main() {
    let source_path = PathBuf::from("source");
    let stubs_path = PathBuf::from("stubs");

    cc::Build::new()
        .includes(&[&source_path, &stubs_path])
        .compiler("clang")
        .file("wrapper.c")
        .warnings(false)
        .flag("-Wno-everything")
        .compile("pokeemerald");
    let out_dir = PathBuf::from(env::var("OUT_DIR").unwrap());
    let bindings = bindgen::Builder::default()
        .clang_args(&[
            &format!("-I{}", source_path.display()),
            &format!("-I{}", stubs_path.display()),
        ])
        .header("wrapper.h")
        .derive_eq(true)
        .parse_callbacks(Box::new(bindgen::CargoCallbacks::new()))
        .generate()
        .unwrap();

    let constants_path = source_path.join("constants");
    let output_path = PathBuf::from("src/_constants.rs");
    let define_lists: &[ConstantEntry] = &[
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
        (
            "Items",
            "items.h",
            &[
                (true, "ITEM_.*"),
                (true, "ITEMS_COUNT"),
                (false, "ITEM_USE_.*"),
            ],
        ),
        ("Abilities", "abilities.h", &[]),
        ("Moves", "moves.h", &[]),
        (
            "FormChangeType",
            "form_change_types.h",
            &[(true, "FORM.*"), (true, ".*TERMINATOR")],
        ),
        ("EggGroup", "pokemon.h", &[(true, "EGG_GROUP_.*")]),
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
    
    println!("cargo::rerun-if-changed=wrapper.c");
    println!("cargo::rerun-if-changed=wrapper.h");
}
