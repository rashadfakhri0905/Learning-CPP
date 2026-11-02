                                        //Local Scope (Block Scope)//

/*
-> An identifier’s scope determines where the identifier can be seen and used within the source code. 
-> When an identifier can be seen and used, we say it is in scope.
-> Not a compile time property.
-> The identifier of a local variable has local scope. An identifier with local scope (technically called 
   block scope) is usable from the point of definition to the end of the innermost pair of curly braces 
   containing the identifier (or for function parameters, at the end of the function).
*/

#include <iostream>

// x is not in scope anywhere in this function
void doSomething()
{
    std::cout << "Hello!\n";
}

int main()
{
    // x can not be used here because it's not in scope yet

    int x{ 0 }; // x enters scope here and can now be used within this function

    doSomething();

    return 0;
} // x goes out of scope here and can no longer be used

//“Out of scope” vs “going out of scope”//

/*
-> An identifier is out of scope anywhere it cannot be accessed within the code.
-> The term “going out of scope” is typically applied to objects rather than identifiers.
-> We say an object goes out of scope at the end of the scope (the end curly brace) in which the object was 
   instantiated. 
*/
 