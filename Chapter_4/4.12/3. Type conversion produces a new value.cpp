// 4.12 — Type Conversion Produces a New Value
//
// Type conversion does not normally change the original
// value or the type of the original variable.
//
// Instead, it produces a new value of the destination type.
//
// Example:
//
// int x { 5 };
// double y { static_cast<double>(x) };
//
// x remains an int with value 5.
// The conversion produces a double value 5.0 for y.
//
// Another example:
//
// double value { 9.8 };
// int number { static_cast<int>(value) };
//
// value remains 9.8.
// number receives 9.
//
// Important:
// Converting a floating point value to an integer
// truncates the fractional part.
// It does not round to the nearest integer.