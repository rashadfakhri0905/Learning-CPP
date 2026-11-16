
#include <iostream>

int main()
{
    // 1. Implicit conversion: int to double
    int integerValue { 10 };
    double decimalValue { integerValue };

    std::cout << "Implicit conversion:\n";
    std::cout << "Integer: " << integerValue << '\n';
    std::cout << "Double:  " << decimalValue << "\n\n";

    // 2. Explicit conversion: double to int
    double price { 19.99 };
    int wholePrice { static_cast<int>(price) };

    std::cout << "Explicit conversion:\n";
    std::cout << "Original price: " << price << '\n';
    std::cout << "Converted price: " << wholePrice << "\n\n";

    // 3. Floating point truncation
    double number { 8.75 };

    int convertedNumber { static_cast<int>(number) };

    std::cout << "Truncation:\n";
    std::cout << "Original: " << number << '\n';
    std::cout << "Converted: " << convertedNumber << "\n\n";

    // 4. Signed to unsigned conversion
    int signedNumber { -1 };

    unsigned int unsignedNumber {
        static_cast<unsigned int>(signedNumber)
    };

    std::cout << "Signed to unsigned conversion:\n";
    std::cout << "Signed: " << signedNumber << '\n';
    std::cout << "Unsigned: " << unsignedNumber << '\n';

    return 0;
}
