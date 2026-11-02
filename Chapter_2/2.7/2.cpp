//Why forward declarations?//

/*

* Tell compiler a function **exists before it’s used**.
* Useful when functions are in **different files**.
* Allows functions to be defined in **any order**.
* Resolves **circular dependencies** (functions calling each other).

*/

// Forgetting the function body //

/*
New programmers often wonder what happens if they forward declare a function but do not define it.

The answer is: it depends. If a forward declaration is made, but the function is never called, the program will
compile and run fine. However, if a forward declaration is made and the function is called, but the program never
defines the function, the program will compile okay, but the linker will complain that it can’t resolve the 
function call.
*/

//example: 

#include <iostream>

int add(int x, int y); // forward declaration of add()

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

// note: No definition for function add
// the error will be linker error as it cant find the obj file!

