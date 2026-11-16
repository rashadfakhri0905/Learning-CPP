
#include <iostream>

int main()
{
    // Character variables
    char grade { 'A' };
    char symbol { '$' };

    std::cout << "Grade: " << grade << '\n';
    std::cout << "Symbol: " << symbol << "\n\n";

    // Taking character input
    char choice {};

    std::cout << "Do you want to continue? (y/n): ";
    std::cin >> choice;

    // Comparing characters
    if (choice == 'y')
    {
        std::cout << "Continuing the program...\n";
            // Demonstrating escape sequences
        std::cout << "\nEscape sequence examples:\n";
        std::cout << "Hello\nWorld\n";
        std::cout << "Name:\tRashad\n";
        std::cout << "Single quote: '\n";
        std::cout << "Double quote: \"\n";
        std::cout << "Backslash: \\\n";

    // Character vs integer
        char character { '5' };
        int number { 5 };

        std::cout << "\nCharacter: " << character << '\n';
        std::cout << "Number: " << number << '\n';
    }
    else if (choice == 'n')
    {
        std::cout << "Exiting the program...\n";
    }
    else
    {
        std::cout << "Invalid choice!\n";
    }

    return 0;
}
