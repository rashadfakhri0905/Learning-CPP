// 4.9 — Printing Boolean Values
//
// By default, std::cout prints Boolean values as integers.
//
// false -> 0
// true  -> 1
//
// Example:
//
// std::cout << true << '\n';  // 1
// std::cout << false << '\n'; // 0
//
// To print the words "true" and "false", use std::boolalpha.
//
// Example:
//
// std::cout << std::boolalpha;
// std::cout << true << '\n';  // true
// std::cout << false << '\n'; // false
//
// To switch back to 0 and 1, use std::noboolalpha.
//
// Remember:
// std::boolalpha changes how bool values are displayed.
// It does not change the actual values stored.