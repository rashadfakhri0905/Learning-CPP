#include <iostream> 

int main()
{
    //define an integer variable named x
    int x; //this variable is uninitialized because we havent given it a value

    //print the value of x to the screen 
    std::cout << x << '\n'; //who knows waht we'll get, because x is uninitialized

    return 0;

}