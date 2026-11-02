                     //When to use function parameters vs Local variables//

/*
-> Because function parameters and local variable can both be used within the body of a function, 
   new programmers sometimes struggle to understand when each should be used. A function parameter 
   should be used when the caller will pass in the initialization value as an argument. A local variable 
   should be used otherwise.
*/

//example:

//Correct way to write //

#include <iostream>

int getValueFromUser()
{
    int val {}; // val is a local variable
    std::cout << "Enter a value: ";
    std::cin >> val;
    return val;
}

int main()
{
    int num { getValueFromUser() }; // main does not need to pass anything

    std::cout << "You entered " << num << '\n';

    return 0;
}