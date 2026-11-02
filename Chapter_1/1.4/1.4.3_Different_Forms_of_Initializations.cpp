#include <iostream>

int main()  //There are 5 common forms of initialization

{
    int a;        //default-initialization (no initializer)

// Traditional initialization forms:
    int b = 5;    // copy-initialization (initial value after equals 
                  // sign)
                  // This form is inherited from C language
    int c (6);    // direct-initialization (initial value in paranthesis)
        
// Modern initialization forms (preffered):
    int d {7};          // direct-list-initialization (initial value in braces)
    int width { 8 };    // direct-list-initialization of initial value 5 into variable width (preferred)
    int height = { 9 }; // copy-list-initialization of initial value 6 into variable height (rarely used)
    int e{};            // value-initialization (empty braces)

    return 0;
}                       // Instantiation is a word used to describe that a variable has been
                        // created and initialized. 

