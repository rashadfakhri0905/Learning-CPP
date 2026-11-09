// 4.6 — 8-Bit Fixed-Width Integers and Characters
//
// On most systems, std::int8_t behaves like signed char,
// and std::uint8_t behaves like unsigned char.
//
// Therefore, printing an 8-bit integer may print a character
// instead of its numeric value.
//
// Example:
// #include <cstdint>
// #include <iostream>
//
// int main()
// {
//     std::int8_t x { 65 };
//     std::cout << x << '\n';
// }
//
// This may print the character 'A' instead of the number 65.
//
// The 16-bit and wider fixed-width integer types do not
// have this particular character-printing issue.
//
// Beginner tip:
// Prefer std::int16_t or a wider type when you need an
// ordinary numeric integer with a specific width.