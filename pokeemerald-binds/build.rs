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

    let out_path = PathBuf::from(env::var("OUT_DIR").unwrap()).join("bindings.rs");
    bindings.write_to_file(&out_path).unwrap();
    bindings.write_to_file("src/_bindings.rs").unwrap();
    eprintln!("{}", out_path.display());
}
