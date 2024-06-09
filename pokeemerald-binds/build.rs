use std::env;
use std::path::PathBuf;

use bindgen::CodegenConfig;

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
        .parse_callbacks(Box::new(bindgen::CargoCallbacks::new()))
        .generate()
        .unwrap();

    let map_groups_bindings = bindgen::Builder::default()
        .header(
            decomp_path
                .join("include/constants/map_groups.h")
                .display()
                .to_string(),
        )
        .parse_callbacks(Box::new(bindgen::CargoCallbacks::new()))
        .generate()
        .unwrap();

    bindings.write_to_file(out_dir.join("bindings.rs")).unwrap();
    map_groups_bindings.write_to_file("src/_map_groups.rs").unwrap();
}
