// 4.9 — Integer to Boolean Conversion
//
// Integers can be converted to Boolean values.
//
// Conversion rules:
//
// 0          -> false
// Any non-zero integer -> true
//
// Examples:
//
// bool a = 0;   // false
// bool b = 5;   // true
// bool c = -3;  // true
//
// With brace initialization:
//
// bool x { 0 }; // allowed: false
// bool y { 1 }; // allowed: true
// bool z { 2 }; // ERROR: narrowing conversion
//
// Best practice:
// Use true and false instead of 0 and 1 when working
// with Boolean variables.
//
// Example:
//
// bool isActive { true };