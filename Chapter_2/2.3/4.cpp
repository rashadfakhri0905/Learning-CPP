                    //Returning a value from a void function is a compile error//

#include <iostream>

void printHi() // This function is non-value returning
{
    std::cout << "In printHi()" << '\n';

    /*return 5;*/ // compile error: we're trying to return a value
}


int main()
{
    printHi();

    return 0;
}
