// 4.8 — Rounding Errors
//
// A rounding error occurs when a floating point number
// cannot be stored exactly.
//
// Example:
//
// double d { 0.1 };
//
// The decimal number 0.1 cannot be represented exactly
// in binary floating point.
//
// Therefore, the stored value is a close approximation.
//
// Rounding errors can grow during mathematical operations.
//
// Example:
//
// double a { 0.1 + 0.1 + 0.1 };
// double b { 0.3 };
//
// We might expect a == b to be true.
// However, rounding errors may make their stored values differ.
//
// Important:
// Never assume floating point values are perfectly exact.
//
// Floating point comparisons require special care.
// A common approach is to compare the difference between
// two values against a small tolerance.
//
// Avoid using floating point types for financial or currency
// calculations when exact decimal arithmetic is required.