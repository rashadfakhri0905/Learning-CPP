
#include <iomanip>
#include <iostream>

int main()
{
    // Different floating point types
    float myFloat { 3.14159265f };
    double myDouble { 3.141592653589793 };
    long double myLongDouble { 3.141592653589793L };

    // Default output precision
    std::cout << "Default precision:\n";
    std::cout << "Float:       " << myFloat << '\n';
    std::cout << "Double:      " << myDouble << '\n';
    std::cout << "Long double: " << myLongDouble << "\n\n";

    // Display more significant digits
    std::cout << std::setprecision(17);

    std::cout << "Higher output precision:\n";
    std::cout << "Float:       " << myFloat << '\n';
    std::cout << "Double:      " << myDouble << '\n';
    std::cout << "Long double: " << myLongDouble << "\n\n";

    // Demonstrating a rounding error
    double a { 0.1 + 0.1 + 0.1 };
    double b { 0.3 };

    std::cout << "Rounding error demonstration:\n";
    std::cout << "0.1 + 0.1 + 0.1 = " << a << '\n';
    std::cout << "0.3             = " << b << '\n';

    std::cout << "Are they equal? " << std::boolalpha << (a == b) << '\n';

    return 0;
}
