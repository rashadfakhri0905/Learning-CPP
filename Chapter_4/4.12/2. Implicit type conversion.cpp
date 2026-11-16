// 4.12 — Implicit Type Conversion
//
// Implicit conversion happens automatically when C++
// needs to convert a value to another type.
//
// Example:
//
// int x { 10 };
// double y { x };
//
// Here, int is automatically converted to double.
//
// Widening conversion:
// Converts a value into a type that can generally represent
// a wider range or more precision.
//
// Example:
// int -> double
//
// Narrowing conversion:
// Converts a value into a type that may not be able
// to represent the original value accurately.
//
// Example:
// double -> int
//
// Example:
//
// double value { 5.7 };
// int number { value }; // Compiler warning: fractional part lost
//
// The result is 5.
//
// Important:
// Implicit conversions can happen in assignments,
// initialization, expressions, and function calls.