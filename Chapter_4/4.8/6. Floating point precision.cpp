// 4.8 — Floating Point Precision
//
// Computers have limited memory, so floating point types
// cannot store every possible decimal number exactly.
//
// Precision tells us how many significant digits a floating
// point type can represent without information loss.
//
// Typical precision:
//
// float:
// 6-9 significant digits (typically 7)
//
// double:
// 15-18 significant digits (typically 16)
//
// long double:
// Depends on the platform.
//
// Example:
//
// float f { 3.14159265358979323846f };
// double d { 3.14159265358979323846 };
//
// The float stores fewer significant digits than the double.
//
// Important:
// A number with more significant digits than the type can
// represent may be stored approximately, not exactly.