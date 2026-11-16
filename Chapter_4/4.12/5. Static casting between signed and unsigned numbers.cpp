// 4.12 — Static Casting Between Signed and Unsigned Numbers
//
// static_cast can also convert between signed and unsigned
// integer types.
//
// Example:
//
// int x { -1 };
// unsigned int y { static_cast<unsigned int>(x) };
//
// The conversion produces the corresponding unsigned value.
//
// For an unsigned type with N bits, conversion is performed
// modulo 2^N.
//
// Example with a 32-bit unsigned int:
//
// -1 becomes 4294967295
//
// Converting back:
//
// unsigned int a { 5 };
// int b { static_cast<int>(a) };
//
// Result:
// b = 5
//
// Important:
// Converting an unsigned value that is too large to fit
// in the signed destination type is implementation-defined.
//
// Best practice:
// Be careful when converting between signed and unsigned types.
// Avoid these conversions unless you understand the result.