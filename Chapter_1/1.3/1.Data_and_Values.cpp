                                 //DATA and VALUES//


#include <iostream> // for std::cout
                    // Values placed in single-quoates are interpreted by the compiler as 
                    // character values.
                    // Values placed in double-quoates are interpreted as text values.
                    // Numeric values are not quoated.

int main() // Values that are placed directly into the source code are known as literals. 
{
    std::cout << 5;               // print the literal number '5'
    std::cout << -6.7;            // print the literal number '-6.7'
    std::cout << 'H';             // print literalcharacter 'H'
    std::cout << "Hello World!";  // print literal text "Hello World!"
    return 0;
}   
                                 //Literals are read only values, so their values can not be modified.