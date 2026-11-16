// 4.12 — Explicit Type Conversion and static_cast
//
// Explicit conversion means telling C++ to convert
// a value into a specific type.
//
// C++ provides static_cast for this purpose.
//
// Syntax:
//
// static_cast<destination_type>(expression)
//
// Example:
//
// double value { 5.7 };
// int number { static_cast<int>(value) };
//
// The double value is explicitly converted to int.
//
// Result:
// number = 5
//
// Another example:
//
// int x { 10 };
// double y { static_cast<double>(x) };
//
// Result:
// y = 10.0
//
// Best practice:
// Prefer static_cast over C-style casts.
//
// static_cast makes the conversion clear and easy to identify.