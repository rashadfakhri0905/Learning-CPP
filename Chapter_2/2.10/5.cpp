                         // Object-like Macros WITHOUT Substitution Text //

// A macro can be defined without replacement text:

#define USE_YEN

// When the preprocessor encounters USE_YEN later,
// it removes it.

// Complete example:
#include <iostream>

#define USE_YEN

int main()
{
    USE_YEN

    std::cout << "Hello, World!\n";

    return 0;
}

// After preprocessing, USE_YEN is removed, so the compiler
// effectively sees:
//
// int main()
// {
//     std::cout << "Hello, World!\n";
//     return 0;
// }
//
// Output:
// Hello, World!

// KEY IDEA:
// #define NAME
// creates a macro with no substitution text.
//
// These macros are generally acceptable and are mainly used
// to control which parts of code are processed by the preprocessor.