                    //Void functions can’t be used in expression that require a value//

#include <iostream>

// void means the function does not return a value to the caller
void printHi()
{
    std::cout << "Hi" << '\n';
}

int main()
{
    printHi(); // okay: function printHi() is called, no value is returned

    /*std::cout << printHi();*/ // compile error

    return 0;
}

/*

-> The first call to printHi() is called in a context that does not require a value.
   Since the function doesn’t return a value, this is fine.
-> The second function call to function printHi() won’t even compile.
-> This statement is trying to send the return value of printHi to std::cout to be printed. 


*/