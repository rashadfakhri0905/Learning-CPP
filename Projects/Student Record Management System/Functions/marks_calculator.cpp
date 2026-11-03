                                //Cumilative Project 1.1 - 2.4//

#include <iostream>
#include "subject_marks.h"


int totalMarks(int x, int y, int z, int a, int b)
{
    int total{};
    total = x + y + z + a + b;
    return total;
}

int marksCalculator()
{
    int phy{ physics() };
    int math{ maths() };
    int chem{ chemistry() };
    int eng{ english() };
    int cse{ computerScience() };

    int total{ totalMarks(phy, math, chem, eng, cse) };

    std::cout << "Your Total Marks Are: " << total << '\n';
    std::cout << "Your Average Marks Are: " << total / 5 << '\n';
}