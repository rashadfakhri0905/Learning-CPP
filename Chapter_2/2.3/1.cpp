                                        //Void return values//
/*
Functions are not required to return a value back to the caller. To tell the compiler that a function 
does not return a value, a return type of void is used.
*/

#include <iostream>

// void means the function does not return a value to the caller
void printHi()
{
    std::cout << "Hi" << '\n';

    // This function does not return a value so no return statement is needed.
}

int main()
{
    printHi(); // okay: function printHi() is called, no value is returned.

    return 0;
}