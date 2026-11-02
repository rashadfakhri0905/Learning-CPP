#include <iostream>

void doNothing(int&) //Don't worry about what & is for now, we are just using it to trick
                     //the compiler into thinking variable x is used (if not using the uninitialized variable 
                    // gives compiler error) 
{

}

int main()
{
    //define an interger variable named x
    int x; //variable is uninitialized

    doNothing(x); //make compiler think we are assigning a value to this variable

//Print the value of x to the screen (who knows what we will get, because x is uninitialized)
//Always initializing your variables is a best practice!!
   std::cout << x;

   return 0;
}