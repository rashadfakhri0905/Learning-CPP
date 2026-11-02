                                //Curly braces and indented code//

/*
-> In C++, curly braces { } usually create a scope.

-> A scope is simply the part of the program where a name (variable, function, etc.) can be used.
*/

/*
int x = 10;  // global scope

int main()
{           // main's scope starts
    int y = 20;

    // x and y can be used here
}
*/

/*
Here: 

x is in global scope 
y is in scope of main()
the {} mark where main ()'s scope begins and ends
BUT not everything belonging to a scope has to be written inside its { }.
*/

//example: function parameters

void add(int x)
{
    // x can be used here
}

// x is written before the {, but it belongs to the function's scope, so it can be used inside the { }.

// complete example: 

#include <iostream> // imports the declaration of std::cout into the global scope

void foo(int x) // foo is defined in the global scope, x is defined within scope of foo()
{ // braces used to delineate nested scope region for function foo()
    std::cout << x << '\n';
} // x goes out of scope here

int main()
{ // braces used to delineate nested scope region for function main()
    foo(5);

    int x { 6 }; // x is defined within the scope of main()
    std::cout << x << '\n';

    return 0;
} // x goes out of scope here
// foo and main (and std::cout) go out of scope here (the end of the file)

