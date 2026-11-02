
/*
==================================================
LEARNCPP: ANGLED BRACKETS VS DOUBLE QUOTES
==================================================

1. ANGLED BRACKETS < >

Example:
    #include <iostream>

Used for headers provided by the compiler, operating
system, or installed libraries.

The preprocessor searches the configured include
directories for these headers.


2. DOUBLE QUOTES " "

Example:
    #include "add.h"

Used for headers you write or expect to find in your
project.

The preprocessor first searches the directory of the
including file, then searches the configured include
directories.


3. COMPARISON

#include <iostream>
    -> Searches configured include directories.

#include "add.h"
    -> Searches the including file's directory first,
       then configured include directories.


4. EXAMPLE

// main.cpp
#include <iostream>
#include "add.h"

int main()
{
    std::cout << add(3, 4) << '\n';
    return 0;
}


BEST PRACTICE:
- Use < > for standard and installed library headers.
- Use " " for your own project headers.
*/
