                                           //Return Values//

/*
When you write a user-defined function, you get to determine whether your function will return 
a value back to the caller or not.

1.  Your function has to indicate what type of value will be returned. This is done by 
    setting the function’s return type, which is the type that is defined before the function’s name.
2.  Inside the function that will return a value, we use a return statement to indicate the specific value
    being returned to the caller.

->  The process of returning a copied value back to the caller is named --> return by value.

*/

#include <iostream>

/* int is the return type
   A return type of int means the function will return some integer value 
   to the caller (the specific value is not specified here) */

int returnFive()
{
    // the return statement provides the value that will be returned
    return 5; // return the value 5 back to the caller
}

int main()
{
    std::cout << returnFive() << '\n'; // prints 5
    std::cout << returnFive() + 2 << '\n'; // prints 7

    returnFive(); // okay: the value 5 is returned, but is ignored since main() doesn't do anything with it

    return 0;
}
