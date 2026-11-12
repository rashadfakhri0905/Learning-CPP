// 4.7 — Handling Trailing Zeros
//
// Trailing zeros can indicate the precision of a measurement.
//
// When a number has a decimal point, trailing zeros
// are considered significant.
//
// Examples:
//
// 87.0    = 8.70e1     // 3 significant digits
// 87.000  = 8.7000e1   // 5 significant digits
//
// When a whole number has no decimal point,
// trailing zeros are assumed to be insignificant
// unless additional information says otherwise.
//
// Example:
//
// 2100    = 2.1e3      // 2 significant digits
//
// If we know the zeros are significant:
//
// 2100    = 2.100e3    // 4 significant digits
//
// An explicit trailing decimal point can indicate
// that the preceding zeros are significant:
//
// 2100.   = 2.100e3    // 4 significant digits
//
// Important:
// Trailing zeros after a decimal point are kept.
// Do not remove them when converting to scientific notation.