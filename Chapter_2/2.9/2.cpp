                                       // The std namespace //

/*
-> Originally, C++ standard library names like cout were in the global namespace.
-> This could cause name conflicts with identifiers created by programmers.
-> New additions to the standard library could also break older code due to naming conflicts.
-> To prevent this, C++ placed all standard library functionality inside the std namespace.
-> Therefore, std::cout means:
-> cout → the identifier
-> std → the namespace containing cout
-> This keeps standard library names separate from your own names.

-> In short: std:: is used to avoid naming conflicts by keeping standard library identifiers inside the std 
   namespace.
*/

// Explicit namespace qualifier std::

// The most straightforward way to tell the compiler that we want to use cout from the std namespace is by 
// explicitly using the std:: prefix. 
// For example:

#include <iostream>

int main()
{
    std::cout << "Hello world!"; // when we say cout, we mean the cout defined in the std namespace
    return 0;
}

// The :: symbol is an operator called the scope resolution operator
// If no identifier to the left of the :: symbol is provided, the global namespace is assumed.
