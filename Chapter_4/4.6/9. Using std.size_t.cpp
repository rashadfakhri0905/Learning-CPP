// 4.6 — Using std::size_t
//
// Include <cstddef> when you explicitly use std::size_t.
//
// Example:
// #include <cstddef>
// #include <iostream>
//
// int main()
// {
//     int number { 5 };
//
//     std::size_t size { sizeof(number) };
//
//     std::cout << size << '\n';
// }
//
// sizeof(number) returns the size of number in bytes.
// The variable size stores that result.
//
// Important:
// You do not need to include a header just to use sizeof.
// Include <cstddef> when you explicitly use std::size_t.
//
// std::size_t is unsigned and at least 16 bits wide.
// Its actual width depends on the implementation.