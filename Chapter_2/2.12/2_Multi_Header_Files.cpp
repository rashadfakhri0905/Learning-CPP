// ============================================================
// HEADER GUARDS AND MULTIPLE SOURCE FILES
// ============================================================

// 1. HEADER GUARDS
// Header guards prevent a header from being included more than
// once in the SAME translation unit (.cpp file after preprocessing).

#ifndef SQUARE_H
#define SQUARE_H

// Declarations go here

#endif

// #ifndef: Checks whether SQUARE_H has not been defined.
// #define: Defines SQUARE_H on the first inclusion.
// #endif: Ends the conditional directive.

// Naming convention: Use the header filename in uppercase.
// Example: square.h -> SQUARE_H.

// Best practice: Use header guards in every header file.


// ============================================================
// 2. HEADER GUARDS DO NOT WORK ACROSS DIFFERENT .CPP FILES
// ============================================================

// Each .cpp file is preprocessed separately.
// Therefore, the same header can be included once in multiple
// translation units, even when it has header guards.

// If a header defines a normal, non-inline function and is
// included in multiple .cpp files, the linker may report a
// multiple-definition error.


// ============================================================
// 3. BEST PRACTICE: DECLARATIONS IN .H, DEFINITIONS IN .CPP
// ============================================================

// square.h
#ifndef SQUARE_H
#define SQUARE_H

int getSquareSides();                    // Function declaration
int getSquarePerimeter(int sideLength);  // Function declaration

#endif

// square.cpp
#include "square.h"  // Includes declarations for consistency

int getSquareSides() // Function definition
{
    return 4;
}

int getSquarePerimeter(int sideLength)
{
    return sideLength * getSquareSides();
}

// main.cpp
#include "square.h"
#include <iostream>

int main()
{
    std::cout << getSquareSides() << '\n';
    std::cout << getSquarePerimeter(5) << '\n';

    return 0;
}

// Output:
// 4
// 20


// ============================================================
// 4. WHY INCLUDE THE HEADER IN ITS OWN .CPP FILE?
// ============================================================

// Including square.h in square.cpp is not strictly necessary
// in this simple example, but it is strongly recommended.

// Benefits:
// 1. Consistency: Helps detect mismatches between declarations
//    and function definitions.
// 2. Maintainability: Changes to declarations can reveal errors.
// 3. Visibility: Makes header declarations available to the .cpp.

// Best practice: Include your own header at the top of its
// corresponding .cpp file.

// Example:
// #include "square.h"


// ============================================================
// 5. WHAT HAPPENS DURING PREPROCESSING?
// ============================================================

// main.cpp after preprocessing (simplified):

// int getSquareSides();
// int getSquarePerimeter(int sideLength);
//
// #include <iostream> is also expanded into standard library
// declarations (omitted here because they are extensive).
//
// int main()
// {
//     std::cout << getSquareSides() << '\n';
//     std::cout << getSquarePerimeter(5) << '\n';
//     return 0;
// }

// The declarations from square.h are inserted into main.cpp.
// The function definitions from square.cpp are NOT inserted.

// Each .cpp file is preprocessed separately, producing its
// own translation unit.


// ============================================================
// 6. IMPORTANT DEFINITIONS
// ============================================================

// Declaration: Tells the compiler a function's name, return type,
//              and parameter types.
//
// Definition:  Provides the actual implementation of a function.
//
// Linker:      Connects function calls to their definitions
//              across separately compiled source files.
//
// Translation unit: A .cpp file after preprocessing, including
//                    the contents of its included headers.
//
// Header guard: Prevents repeated inclusion within one
//               translation unit.


// ============================================================
// REMEMBER
// ============================================================

// .h file  -> Usually contains declarations.
// .cpp file -> Contains function definitions.
// Header guards -> Prevent repeated inclusion in one translation unit.
// Linker errors -> Can occur if ordinary non-inline functions have
//                  multiple definitions across translation units.
//
// Compile all relevant .cpp files together, for example:
// g++ main.cpp square.cpp -o main