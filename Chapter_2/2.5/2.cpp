                                     //Local Variable Lifetime// 

/*
-> Function parameters are created and initialized when the function is entered, and variables within the 
   function body are created and initialized at the point of definition.
*/

//example:

int add(int x, int y) // x and y created and initialized here
{
    int z{ x + y };   // z created and initialized here

    return z;
}

/*
-> Local variables are destroyed in the opposite order of creation at the end of the set of curly braces in 
   which it is defined (or for a function parameter, at the end of the function).
-> Note that variable creation and destruction happen when the program is running (called runtime), not at 
   compile time. Therefore, lifetime is a runtime property.
*/

//example:

#include <iostream>

void doSomething()
{
    std::cout << "Hello!\n";
}

int main()
{
    int x{ 0 };    // x's lifetime begins here

    doSomething(); // x is still alive during this function call

    return 0;
} // x's lifetime ends here

                           //What happens when an object is destroyed?//

/*
-> In most cases, nothing. The destroyed object simply becomes invalid.
-> At some point after destruction, the memory used by the object will be deallocated (freed up for reuse).
*/