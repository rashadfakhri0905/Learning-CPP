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

int english()
{
    int eng{};
    std::cout << "Enter your English Marks: ";
    std::cin >> eng;

    return eng;
}

int computerScience()
{
    int cs{};
    std::cout << "Enter your Computer Science Marks: ";
    std::cin >> cs;

    return cs;
}

int totalMarks(int x, int y, int z, int a, int b)
{
    int total{};
    total = x + y + z + a + b;
    return total;
}

int averageMakrs(int x)
{
    int average{};
    average = x/5;
    return average;
}

int marksCalculator()
{
    int phy{ physics() };
    int math{ maths() };
    int chem{ chemistry() };
    int eng{ english() };
    int cs{ computerScience() };

    int total{ totalMarks(phy, math, chem, cs, eng) };
    int avg {averageMakrs(total)};
}