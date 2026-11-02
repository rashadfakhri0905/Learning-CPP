
/*
============================================================
     USING HEADER FILES TO PROPAGATE FORWARD DECLARATIONS
============================================================

1. WHAT IS A FORWARD DECLARATION?
------------------------------------------------------------

DEFINITION:
A forward declaration tells the compiler that an identifier
exists before its complete definition is encountered.

For a function, a forward declaration is usually written
as a function prototype.

EXAMPLE:

    int add(int x, int y);

EXPLANATION:
- int       -> The function returns an integer.
- add       -> The function name.
- int x     -> The first parameter is an integer.
- int y     -> The second parameter is an integer.
- ;         -> Ends the declaration.

This tells the compiler how add() can be called, but it
does not provide the function's implementation.

============================================================
2. THE PROBLEM WITH MANUAL FORWARD DECLARATIONS
============================================================

Suppose we have two source files.

FILE: add.cpp

    int add(int x, int y)
    {
        return x + y;
    }

FILE: main.cpp

    #include <iostream>

    int add(int x, int y);

    int main()
    {
        std::cout << add(3, 4) << '\n';
        return 0;
    }

OUTPUT:
7

PROBLEM:
If many functions are defined in other files, manually
writing all their forward declarations becomes tedious.

SOLUTION:
Put the declarations in a header file and include that
header wherever the declarations are needed.

============================================================
3. WHAT IS A HEADER FILE USED FOR?
============================================================

A header file allows us to store declarations in one place
and share them across multiple source files.

For example:

    add.h

The header contains the declaration:

    int add(int x, int y);

Both main.cpp and add.cpp can include add.h.

BENEFITS:
1. Avoids repeating declarations.
2. Makes programs easier to maintain.
3. Keeps declarations organized.
4. Helps different source files use the same interface.

============================================================
4. NAMING HEADER FILES
============================================================

A common convention is to use the .h extension.

Examples:
    add.h
    calculator.h
    functions.h

BEST PRACTICE:
When a header belongs to a corresponding source file,
use the same base name.

Example:
    add.h
    add.cpp

This makes it easier to identify which files belong
together.

============================================================
5. CREATING add.h
============================================================

FILE: add.h

    int add(int x, int y);

This header contains the function declaration.

IMPORTANT:
- The declaration must end with a semicolon.
- The header does not need to contain the implementation.
- Header guards should normally be added to prevent
  repeated inclusion. They are demonstrated below.

============================================================
6. INCLUDING A HEADER FILE
============================================================

Use double quotes for your own project headers:

    #include "add.h"

Use angle brackets commonly for standard library headers:

    #include <iostream>

When the preprocessor processes #include "add.h", the
header's contents are made available at that point in
the source file.

Therefore, main.cpp receives the declaration:

    int add(int x, int y);

This allows the compiler to understand calls to add().

============================================================
7. COMPLETE MULTI-FILE PROJECT
============================================================

Create these three files in the same project directory:

    Project/
    |
    |-- main.cpp
    |-- add.cpp
    |-- add.h

------------------------------------------------------------
FILE 1: add.h
------------------------------------------------------------

#ifndef ADD_H
#define ADD_H

int add(int x, int y);

#endif

EXPLANATION:
- ADD_H is a header guard macro.
- The declaration is included only if ADD_H has not
  already been defined in this preprocessing run.
- #endif closes the conditional block.

------------------------------------------------------------
FILE 2: add.cpp
------------------------------------------------------------

#include "add.h"

int add(int x, int y)
{
    return x + y;
}

EXPLANATION:
- Includes the declaration from add.h.
- Defines the actual add() function.
- Returns the sum of x and y.

------------------------------------------------------------
FILE 3: main.cpp
------------------------------------------------------------

#include <iostream>
#include "add.h"

int main()
{
    std::cout << "The sum of 3 and 4 is "
              << add(3, 4) << '\n';

    return 0;
}

EXPLANATION:
- <iostream> provides the declaration for std::cout.
- "add.h" provides the declaration for add().
- main() calls add(3, 4).
- The linker connects the call to the implementation
  defined in add.cpp.

OUTPUT:

The sum of 3 and 4 is 7

============================================================
8. HOW THE PROGRAM WORKS
============================================================

STEP 1:
The preprocessor processes main.cpp and includes add.h.

STEP 2:
The compiler sees the declaration of add() and knows
that it accepts two integers and returns an integer.

STEP 3:
The compiler processes add.cpp, which also includes add.h.

STEP 4:
The compiler compiles the source files into object code.

STEP 5:
The linker connects the function call in main.cpp to
the definition of add() in add.cpp.

STEP 6:
The executable is produced.

IMPORTANT:
The header provides the declaration. The implementation
is defined in add.cpp.

============================================================
9. HOW TO COMPILE THE PROJECT
============================================================

If you are using GCC or G++ in the terminal, navigate to
the directory containing all three files.

Compile:

    g++ main.cpp add.cpp -o main

Run on Windows PowerShell:

    .\main

EXPECTED OUTPUT:

The sum of 3 and 4 is 7

IMPORTANT:
Do not normally add add.h to the compile command.

Correct:

    g++ main.cpp add.cpp -o main

Incorrect approach:

    g++ main.cpp add.cpp add.h -o main

Header files are included through #include directives.
The corresponding .cpp files are compiled separately.

============================================================
10. WHY INCLUDE add.h IN add.cpp TOO?
============================================================

The implementation file should include its own header:

    #include "add.h"

This helps ensure that the implementation agrees with
the function declaration.

For example, if add.h declares:

    int add(int x, int y);

But add.cpp defines a function with an incompatible
signature, the compiler can diagnose the mismatch.

Including the header in both files helps keep the
declaration and implementation consistent.

============================================================
11. HEADER FILE VS SOURCE FILE
============================================================

HEADER FILE (.h):
- Usually contains declarations.
- Can be included in multiple source files.
- Commonly provides the interface of a function or class.

SOURCE FILE (.cpp):
- Usually contains function implementations.
- Is compiled into object code.
- Is linked with other compiled source files.

EXAMPLE:

    add.h  -> Declares add()
    add.cpp -> Implements add()
    main.cpp -> Calls add()

============================================================
12. IMPORTANT POINTS TO REMEMBER
============================================================

1. A forward declaration informs the compiler about a name.
2. A function prototype is a type of declaration.
3. Header files store declarations that can be shared.
4. Use #include "add.h" for a project header.
5. The declaration int add(int x, int y); ends with ;.
6. The function implementation belongs in add.cpp here.
7. Include the corresponding header in its source file.
8. Compile all required .cpp files together.
9. Header guards help prevent repeated header inclusion.
10. The linker connects function calls to their definitions.

============================================================
                    END OF NOTES
============================================================
*/
