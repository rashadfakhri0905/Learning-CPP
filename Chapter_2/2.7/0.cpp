                              //Forward declarations and definitions//

#include <iostream>

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

int add(int x, int y)
{
    return x + y;
}

/*
->The reason this program doesn’t compile is because the compiler compiles the contents of code files 
sequentially. When the compiler reaches the function call add() on line 5 of main, it doesn’t know what add is, 
because we haven’t defined add until line 9! That produces the error, identifier not found.
    -> 1. Reorder the function definitions
    -> 2. Use a forward declaration
*/