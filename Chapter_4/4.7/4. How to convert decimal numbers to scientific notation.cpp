// 4.7 — Converting Decimal Numbers to Scientific Notation
//
// Steps:
//
// 1. Start with an exponent of zero.
// 2. Move the decimal point until exactly one non-zero digit
//    remains to its left.
// 3. Moving the decimal point LEFT increases the exponent.
// 4. Moving the decimal point RIGHT decreases the exponent.
// 5. Remove leading zeros from the significand.
// 6. Remove trailing zeros only when the original number
//    had no decimal point and their significance is unknown.
//
// Examples:
//
// 600.410
// Move decimal 2 places left:
// 6.00410e2
//
// 0.0078900
// Move decimal 3 places right:
// 7.8900e-3
//
// 42030
// Move decimal 4 places left:
// 4.203e4
//
// Remember:
// Left = positive exponent
// Right = negative exponent