// 4.7 — Quick Revision
//
// Scientific notation:
// A short way to represent very large or very small numbers.
//
// General form:
// significand x 10^exponent
//
// C++ notation:
// 1.2e4 = 12000
// 5e-2  = 0.05
//
// Significand:
// The number before e.
//
// Exponent:
// The power of 10 after e.
//
// Significant digits:
// The meaningful digits in the significand.
//
// Decimal moves:
// Left  -> positive exponent
// Right -> negative exponent
//
// Trailing zeros:
// After a decimal point -> significant.
// Without a decimal point -> assumed insignificant,
// unless additional information says otherwise.
//
// C++ storage:
// 87.0 and 87.000 have the same stored numeric value.