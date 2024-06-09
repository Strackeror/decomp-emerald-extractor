#![allow(non_upper_case_globals)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(clippy::useless_transmute)]
#![allow(clippy::too_many_arguments)]
include!(concat!(env!("OUT_DIR"), "/bindings.rs"));

pub mod constants {
    use cps::cps;

    #[cps]
    macro_rules! handle_constants {
        ($type:ident $filename:literal) =>
        let $(pub const $name:ident: u32 = $value:literal;)* = cps::include!($filename) in
        {
            #[derive(Debug, Clone, Copy)]
            pub enum $type {
                $($name),*
            }

            impl $type {
                pub fn from_int(i: u32) -> Option<$type> {
                    match i {
                        $($value => Some($type::$name),)*
                        _ => None
                    }
                }

                pub fn to_string(self) -> &'static str {
                    match self {
                        $($type::$name => stringify!($name),)*
                    }
                }
            }
        };
    }

    handle_constants!{MapGroups "pokeemerald-binds/src/_map_groups.rs"}
}
