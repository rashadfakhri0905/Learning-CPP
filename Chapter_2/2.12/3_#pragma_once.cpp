// ============================================================
// #pragma once
// ============================================================

// Purpose:
// Prevents a header file from being included multiple times
// within the same translation unit.

// Syntax:
// #pragma once

// Example: square.h
#pragma once

int getSquareSides();
int getSquarePerimeter(int sideLength);


// HOW IT WORKS:
// 1. #pragma once tells the compiler to process this header
//    only once per translation unit.
// 2. It serves the same purpose as traditional header guards.
// 3. The compiler handles the guarding automatically.

// TRADITIONAL HEADER GUARDS:
// #ifndef SQUARE_H
// #define SQUARE_H
// // Header contents
// #endif

// #pragma once:
// Requires only one line, making it simpler and less error-prone.

// ADVANTAGES:
// 1. Easy to write and maintain.
// 2. Prevents accidental repeated inclusion.
// 3. Supported by virtually all modern C++ compilers.

// LIMITATIONS:
// 1. Not officially part of the C++ standard.
// 2. Its behavior is implementation-specific.
// 3. If identical headers exist at different file paths,
//    the compiler might not recognize them as the same header.

// BEST PRACTICE:
// Both methods are widely used in modern C++.
// Traditional header guards are standard and portable.
// #pragma once is simpler and supported by most modern compilers.

// IMPORTANT:
// Neither method prevents multiple-definition errors caused by
// defining ordinary non-inline functions in headers included
// by multiple translation units.