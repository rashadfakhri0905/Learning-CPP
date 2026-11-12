// 4.8 — Floating Point Variables and Literals
//
// Examples of floating point variables:
//
// float f { 3.14f };
// double d { 3.14 };
// long double ld { 3.14L };
//
// Floating point literals default to double.
//
// Suffixes:
// f or F -> float
// no suffix -> double
// l or L -> long double
//
// Examples:
//
// 5       // integer literal
// 5.0     // double literal
// 5.0f    // float literal
// 5.0L    // long double literal
//
// Best practice:
// Match the literal type to the variable type to avoid
// unnecessary conversions.