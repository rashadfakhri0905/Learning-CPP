#include <iostream>
#include "../headers/ask_marks.h"

int askPhysicsMarks()
{
    int phy{};
    std::cout << "Enter your Physics Marks: ";
    std::cin >> phy;

    return phy;
}

int askChemistryMarks()
{
    int chem{};
    std::cout << "Enter your Chemistry Marks: ";
    std::cin >> chem;

    return chem;
}

int askEnglishMarks()
{
    int eng{};
    std::cout << "Enter your English Marks: ";
    std::cin >> eng;

    return eng;
}

int askMathsMarks()
{
    int maths{};
    std::cout << "Enter your Maths Marks: ";
    std::cin >> maths;
    
    return maths;
}

int askComputerScienceMarks()
{
    int cs{};
    std::cout << "Enter your Computer Science Marks: ";
    std::cin >> cs;

    return cs;
}
