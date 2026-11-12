// 4.8 — Printing Floating Point Numbers
//
// std::cout does not always print floating point numbers
// exactly as they are written.
//
// Example:
//
// std::cout << 5.0 << '\n';       // Prints 5
// std::cout << 6.7f << '\n';      // Prints 6.7
// std::cout << 9876543.21 << '\n'; // May print scientific notation
//
// By default:
// - Trailing fractional zeros are not displayed.
// - Large or small values may be displayed in scientific notation.
//
// Scientific notation is a shorter way to represent
// very large or very small numbers.