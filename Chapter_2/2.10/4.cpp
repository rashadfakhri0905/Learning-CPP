                           // Object-like Macros with Substitution Text //

// A macro can be given replacement text.
// The preprocessor replaces every occurrence of the macro
// with that replacement text before compilation.
#include <iostream>

#define MY_NAME "Alex"

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';
}

// After preprocessing, this becomes roughly:

/*
int main()
{
    std::cout << "My name is: " << "Alex" << '\n';
}
*/
// Output:
// My name is: Alex

// IMPORTANT:
// Object-like macros with substitution text were commonly used
// in older C/C++ code to give names to constants/literals.
//
// In modern C++, better alternatives (such as constexpr constants)
// are available.

// BEST PRACTICE:
// Avoid macros with substitution text unless there is no good
// alternative.
