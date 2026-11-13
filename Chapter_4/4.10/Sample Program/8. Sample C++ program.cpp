
#include <iostream>

// Returns true if the number is even
bool isEven(int number)
{
    return number % 2 == 0;
}

// Returns the absolute value of a number
int getAbsoluteValue(int number)
{
    if (number < 0)
        return -number; // Early return

    return number;
}

int main()
{
    std::cout << "Enter an integer: ";
    int number {};
    std::cin >> number;

    // Simple if statement
    if (number == 0)
        std::cout << "The number is zero.\n";

    // If-else statement
    if (isEven(number))
        std::cout << "The number is even.\n";
    else
        std::cout << "The number is odd.\n";

    // Chained if statements
    if (number > 0)
        std::cout << "The number is positive.\n";
    else if (number < 0)
        std::cout << "The number is negative.\n";
    else
        std::cout << "The number is neither positive nor negative.\n";

    // Boolean-returning function. This is carried out only if the number is even.
    if (isEven(number))
        std::cout << "Even number check returned true.\n";

    // Early return demonstration
    std::cout << "Absolute value: "
              << getAbsoluteValue(number) << '\n';

    return 0;
}
