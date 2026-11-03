#include <iostream>
#include "ask_marks.h"
#include "calculated_marks.h"


int totalMarks(int x, int y, int z, int a, int b)
{
    int total{};
    total = x + y + z + a + b;
    return total;
}

int averageMarks(int x, int y, int z, int a, int b)
{
    int average{};
    average = x + y + z + a + b/5;
    return average;
}

int calculatedMarks()
{
    int phy{ askPhysicsMarks() };
    int math{ askMathsMarks() };
    int chem{ askChemistryMarks() };
    int eng{ askEnglishMarks() };
    int cs{ askComputerScienceMarks() };
    int total{ totalMarks(phy, math, chem, cs, eng) };
    int avg {averageMarks(phy, math, chem, cs, eng)};

    std::cout << "Your Total Marks Are: " << total << '\n';
    std::cout << "Your Average Marks Are: " << avg << '\n';
    std::cout << "Your Percentage is: " << total*100/500 << '\n';
}