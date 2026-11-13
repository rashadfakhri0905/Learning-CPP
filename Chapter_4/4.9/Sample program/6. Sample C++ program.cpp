
#include <iostream>

// Returns true if both numbers are equal
bool isEqual(int x, int y)
{
    return x == y;
}

// Returns true if the number is even
bool isEven(int number)
{
    return number % 2 == 0;
}

int main()
{
    // Boolean variables
    bool isStudent { true };
    bool isWorking { false };

    std::cout << std::boolalpha;

    std::cout << "Is student? " << isStudent << '\n';
    std::cout << "Is working? " << isWorking << '\n';

    // Logical NOT
    std::cout << "Is not a student? " << !isStudent << "\n\n";

    // Boolean input
    bool likesCpp {};

    std::cout << "Do you like C++? (true/false): ";
    std::cin >> std::boolalpha >> likesCpp;

    std::cout << "Your answer: " << likesCpp << "\n\n";

    // Boolean return values
    int a { 10 };
    int b { 10 };

    std::cout << "Are a and b equal? "
              << isEqual(a, b) << '\n';

    std::cout << "Is a even? "
              << isEven(a) << '\n';

    //Some addition

    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> std::boolalpha >> x ;

    std::cout << "Enter another integer: ";
    int y {};
    std::cin >> std::boolalpha >> y ;

    std::cout << "Are x and y equal?" << std:: boolalpha 
              << isEqual(x,y) << '\n';

    std::cout << "Is x even?" << std::boolalpha 
              << isEven(x)<< '\n';

    std::cout << "Is y even?" << std::boolalpha 
              << isEven(y)<< '\n';



    return 0;
}
