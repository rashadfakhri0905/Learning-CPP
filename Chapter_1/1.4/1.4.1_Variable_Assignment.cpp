                                   // Variable Assignment //

#include <iostream>

int main()
{
    int x;  // Defining a variable x, of type interger
    x = 10; // Assignment of value 10 into variable x

    // Variable x now has value 10
    // Assignment can be used whenever we want to 
    // change the value of a variable.

    std::cout << x;  // Prints 10
                     // Normal variables can only hold one value at a time
    x = 20;          // Changes the value stored in the variable x

    std::cout << x; // Prints 20

    return 0;
}