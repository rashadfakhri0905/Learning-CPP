                                //Cumilative Project 1.1 - 2.4//

#include <iostream>
int physics()
{
    int phy{};
    std::cout << "Enter your Physics Marks: ";
    std::cin >> phy;

    return phy;
}

int maths()
{
    int maths{};
    std::cout << "Enter your Maths Marks: ";
    std::cin >> maths;
    
    return maths;
}

int chemistry()
{
    int chem{};
    std::cout << "Enter your Chemistry Marks: ";
    std::cin >> chem;

    return chem;
}

int totalMarks(int x, int y, int z)
{
    int total{};
    total = x + y + z;
    return total;
}

int main()
{
    int phy{ physics() };
    int math{ maths() };
    int chem{ chemistry() };

    int total{ totalMarks(phy, math, chem) };

    std::cout << "Your Total Marks Are: " << total << '\n';
    std::cout << "Your Average Marks Are: " << total / 3 << '\n';
}
