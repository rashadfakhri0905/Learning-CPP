#include <iostream>

int main()
{
    std::cout << "Enter two numbers: "; //ask for two numbers

    int x{}; 
    int y{};

    std::cin >> x;
    std::cin >> y;

    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}