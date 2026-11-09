// 4.6 — Optional: Size Limits
//
// You can use sizeof to find the size of std::size_t itself.
//
// Example:
// #include <cstddef>
// #include <iostream>
//
// int main()
// {
//     std::cout << sizeof(std::size_t) << '\n';
// }
//
// The size of std::size_t limits how large an object can be,
// because sizeof must be able to represent an object's size.
//
// In practice, available memory and compiler limits may restrict
// object sizes even further.
//
// This section is optional for beginners. Understand the basic
// purpose of std::size_t first.