// 4.7 — Scientific Notation and C++ Storage
//
// Scientific notation helps communicate the precision
// of a number.
//
// However, C++ stores the numeric value, not the original
// way the number was written.
//
// Example:
//
// double a { 87.0 };
// double b { 87.000 };
//
// Both variables store the same numeric value: 87.
//
// C++ cannot determine from the stored value whether
// the original number was written as 87.0 or 87.000.
//
// Therefore, the original measurement precision is not
// preserved just by writing extra zeros in a literal.