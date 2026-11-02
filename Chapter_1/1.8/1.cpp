                                 //  Whitespace and Basic Formatting //
// Whitespace is a term that refers to characters that are used for formatting purposes
// Whitespace in C++ is generally used for 3 things: separating certain language elements,
// inside text, and for formatting code.
#include <iostream>

int main()
{
    int x; // int and x must be whitespace separated
    int main(); // int and main must be whitespace separated

    // When whitespace is required as a separator, the compiler doesn’t care how much whitespace is used, 
    // as long as some exists
    
    int a;
    int                y;
            int
               z;

    // Inside quoted text, the amount of whitespace is taken literally.
     
    std::cout << "Hello          world!"; // Newlines are not allowed in quoted text.

    //Quoted text separated by nothing but whitespace (spaces, tabs, or newlines) will be concatenated:

    std::cout << "Hello "
     "world!"; // prints "Hello world!"
    
    return 0;
}