                            // Introduction to Operators Expressions //

// Expressions

#include <iostream>

// five() is a function that returns the value 5
int five()
{
    return 5;
}

int main()
{
    int a{ 2 };             // initialize variable a with literal value 2
    int b{ 2 + 3 };         // initialize variable b with computed value 5
    int c{ (2 * 3) + 4 };   // initialize variable c with computed value 10
    int d{ b };             // initialize variable d with variable value 5
    int e{ five() };        // initialize variable e with function return value 5

    return 0;
}

// In general programming, an expression is a non-empty sequence of literals, variables, 
// operators, and function calls that calculates a value. 
// The process of executing an expression is called evaluation, and the resulting value produced is called the result of the expression 
// (also sometimes called the return value).

/*
    2               // 2 is a literal that evaluates to value 2
    "Hello world!"  // "Hello world!" is a literal that evaluates to text "Hello world!"
    x               // x is a variable that evaluates to the value held by variable x
    2 + 3           // operator+ uses operands 2 and 3 to evaluate to value 5
    five()          // evaluates to the return value of function five()
*/

// In the context of an expression, function calls evaluate to whatever value the function returns.

/*
int x{ 2 + 3 }; // 2 + 3 is an expression that has no semicolon -- the semicolon is at the end of the statement containing the expression
*/