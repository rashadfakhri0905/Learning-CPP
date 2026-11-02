                     // Naming Collisions and Introduction to Name Spaces //

/*
 If two identical identifiers are introduced into the same program in a way that the compiler or linker can’t 
 tell them apart, the compiler or linker will produce an error. This error is generally referred to as a 
 naming collision (or naming conflict).
*/

                                    //Scope Region//

/*
A scope region is an area of source code where all declared identifiers are considered distinct from names 
declared in other scopes (much like the cities in our analogy). Two identifiers with the same name can be 
declared in separate scope regions without causing a naming conflict. However, within a given scope region, 
all identifiers must be unique, otherwise a naming collision will result.
*/

//example: Body of a function

                                           //Namespaces//

/*
-> A namespace provides another type of scope region (called namespace scope) that allows you to declare or 
   define names inside of it for the purpose of disambiguation. The names declared in a namespace are isolated 
   from names declared in other scopes, allowing such names to exist without conflict.
-> Namespaces may only contain declarations and definitions (e.g. variables and functions). 
-> Executable statements are not allowed unless they are part of a definition (e.g. within a function).
-> WE can put all functions in a namespace to avoid collision of naming in big projects.
*/

//example: if we put all your math functions in a namespace named math, then your math functions won’t 
//collide with identically named functions outside the math namespace.

                                       // Global Namespace //

/*
-> In C++, any name that is not defined inside a class, function, or a namespace is considered to be part of an 
   implicitly-defined namespace called the global namespace
-> Identifiers declared inside the global scope are in scope from the point of declaration to the end of the file.
-> Although variables can be defined in the global namespace, this should generally be avoided.
*/

#include <iostream> // imports the declaration of std::cout into the global scope

// All of the following statements are part of the global namespace

void foo();    // okay: function forward declaration
int x;         // compiles but strongly discouraged: non-const global variable definition (without initializer)
int y { 5 };   // compiles but strongly discouraged: non-const global variable definition (with initializer)
/* x = 5;      // compile error: executable statements are not allowed in namespaces */

int main()     // okay: function definition
{
    return 0;
}

void goo();    // okay: A function forward declaration