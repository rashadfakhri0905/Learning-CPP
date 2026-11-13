// 4.10 — Non-Boolean Conditionals
//
// An if statement does not require its condition to be
// explicitly written as a bool.
//
// If the condition is not Boolean, C++ converts it to bool.
//
// Conversion rules:
//
// 0       -> false
// Non-zero -> true
//
// Examples:
//
// int x { 5 };
//
// if (x)
//     std::cout << "True\n";
//
// Since x is 5 (non-zero), it converts to true.
//
// Another example:
//
// int y { 0 };
//
// if (y)
//     std::cout << "True\n";
// else
//     std::cout << "False\n";
//
// Output:
// False
//
// Key insight:
// if (x) means "if x is non-zero".
//
// Best practice:
// Prefer explicit comparisons such as if (x != 0)
// when they make your intention clearer.