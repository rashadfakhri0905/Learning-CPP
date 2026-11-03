#include <iostream>
#include "Student_Management_System/headers/ask_marks.h"
#include "Student_Management_System/headers/calculated_marks.h"

int totalMarks(int x, int y, int z, int a, int b)
{
    int total{};

    total = x + y + z + a + b;

    return total;
}

int averageMarks(int x, int y, int z, int a, int b)
{
    int average{};

    average = (x + y + z + a + b) / 5;

    return average;
}

void calculatedMarks()
{
    int phy{ askPhysicsMarks() };
    int math{ askMathsMarks() };
    int chem{ askChemistryMarks() };
    int eng{ askEnglishMarks() };
    int cs{ askComputerScienceMarks() };

    int total{ totalMarks(phy, math, chem, eng, cs) };

    int avg{ averageMarks(phy, math, chem, eng, cs) };

    std::cout << "\nYour Total Marks Are: " << total << '\n';

    std::cout << "Your Average Marks Are: " << avg << '\n';

    std::cout << "Your Percentage Is: " << total * 100 / 500 << "%\n";
}