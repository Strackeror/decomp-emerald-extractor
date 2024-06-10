#![allow(non_upper_case_globals)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(clippy::useless_transmute)]
#![allow(clippy::too_many_arguments)]
include!(concat!(env!("OUT_DIR"), "/bindings.rs"));

macro_rules! handle_constant_list {
    ($type:ident $(pub const $name:ident: u32 = $value:literal;)*) =>
    {
        #[derive(Debug, Clone, Copy, PartialEq, Eq)]
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

            pub fn c_name(self) -> &'static str {
                match self {
                    $($type::$name => stringify!($name),)*
                }
            }
        }

        impl std::fmt::Display for $type {
            fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
                write!(f, "{}", self.c_name())
            }
        }


    };
}

mod _constants;
pub use _constants::*;
