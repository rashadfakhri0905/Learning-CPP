// 4.6 — What Is std::size_t?
//
// std::size_t is an unsigned integer type used to represent
// the size of objects in bytes and the length of objects.
//
// The sizeof operator returns a value of type std::size_t.
//
// Example:
// #include <iostream>
//
// int main()
// {
//     std::cout << sizeof(int) << '\n';
// }
//
// On many modern systems, this prints 4 because int is 4 bytes.
//
// If you want to declare a variable to store the result
// of sizeof, std::size_t is the appropriate type.