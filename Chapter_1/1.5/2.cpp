#include <iostream>

int main()
{
    std::cout << "Enter a number: "; //ask for a number

    int x{}; //define a variable x to hold user input (and value-initialize it)

    std::cin >> x; //get a numebr from keyboard and store it in variable x 
    std::cout << "You Entered: " << x << '\n';
    
    return 0;
}