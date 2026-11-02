                                            // Revisiting main()// 

/*

In C++, there are two special requirements for main():

   1 -> main() is required to return an int.
   2 -> Explicit function calls to main() are disallowed.


*/
                                            // Status Codes//

/*
The return value from main() is sometimes called a status code (or less commonly, an exit code, or rarely
 a return code). The status code is used to signal whether your program was successful or not.
*/


             // A value-returning function that does not return a value will produce undefined behavior//



/*
A function that returns a value is called a value-returning function. A function is value-returning if the return 
type is anything other than void.

A value-returning function must return a value of that type (using a return statement), otherwise undefined 
behavior will result.

*/

                      //Function main will implicitly return 0 if no return statement is provided//


/*
The only exception to the rule that a value-returning function must return a value via a return statement is for 
function main(). The function main() will implicitly return the value 0 if no return statement is provided.
*/

                                 //Functions can only return a single value//


/*
->  A value-returning function can only return a single value back to the caller each time it is called.

->  Note that the value provided in a return statement doesn’t need to be literal -- it can be the result of
    any valid expression, including a variable or even a call to another function that returns a value. 
    In the getValueFromUser() example above, we returned a variable input, which held the number the user input.
*/

                        //The function author can decide what the return value means//

/*
The meaning of the value returned by a function is determined by the function’s author. Some functions use return 
values as status codes, to indicate whether they succeeded or failed. Other functions return a calculated or 
selected value. Other functions return nothing.
*/