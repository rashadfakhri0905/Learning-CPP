
/*
============================================================
                     HEADER FILES IN C++
============================================================

1. WHAT IS A HEADER FILE?
------------------------------------------------------------

DEFINITION:
A header file is a file that contains declarations and other
information that can be shared between multiple source files.

Common file extensions:
    .h
    .hpp

Some header files have no extension.

Header files commonly contain:
    1. Function declarations (prototypes)
    2. Class declarations
    3. Struct declarations
    4. Constants and type declarations
    5. Template definitions
    6. Other declarations needed by source files

EXAMPLE:

    // math.h
    int add(int a, int b);

This declares the add() function without providing its
implementation.

============================================================
2. WHY DO WE NEED HEADER FILES?
============================================================

Imagine that a program contains many source files.

Without header files, you might need to repeat the same
function declarations in multiple source files.

This creates unnecessary repetition and makes maintenance
difficult.

Header files allow us to write declarations once and include
them wherever they are needed.

BENEFITS:
    1. Reduce repeated declarations.
    2. Organize large programs.
    3. Share declarations between source files.
    4. Make multi-file projects easier to maintain.
    5. Keep declarations separate from implementations.

============================================================
3. WHAT IS #INCLUDE?
============================================================

DEFINITION:
#include is a preprocessor directive that makes the contents
of another file available during preprocessing.

SYNTAX:

    #include <header_name>

OR:

    #include "header_name"

The preprocessor processes the included file as part of
the source being prepared for compilation.

IMPORTANT:
Conceptually, the included file's contents are inserted
at the location of the #include directive.

============================================================
4. STANDARD LIBRARY HEADER FILES
============================================================

C++ provides standard library headers containing
declarations for standard library functionality.

EXAMPLE:
*/

#include <iostream>

int main()
{
    std::cout << "Hello, world!\n";

    return 0;
}

/*
OUTPUT:
Hello, world!

EXPLANATION:
1. #include <iostream> includes the standard input/output
   stream declarations.
2. std::cout is the standard output stream object.
3. The declaration of std::cout is provided through the
   standard library's iostream header.
4. The compiler can therefore recognize std::cout.
5. The program prints "Hello, world!" to the console.

IMPORTANT:
You do not need to write the declarations for std::cout
yourself because the standard library provides them.

============================================================
5. WHAT HAPPENS WITHOUT #INCLUDE <iostream>?
============================================================

Consider:

    int main()
    {
        std::cout << "Hello";
        return 0;
    }

If the required declaration of std::cout has not been
provided, the compiler will generally report an error
because it cannot recognize the name.

Including <iostream> makes the necessary declarations
available to the source file.

============================================================
6. CREATING YOUR OWN HEADER FILE
============================================================

Suppose we want to create an add() function and use it
in multiple files.

FILE 1: math.h

    #ifndef MATH_H
    #define MATH_H

    int add(int a, int b);

    #endif

EXPLANATION:
- The header declares the add() function.
- It does not provide the function's implementation.
- The #ifndef and #define directives form a header guard.
- The header guard helps prevent repeated inclusion of
  the same header contents within one translation unit.

FILE 2: math.cpp

    #include "math.h"

    int add(int a, int b)
    {
        return a + b;
    }

EXPLANATION:
- math.cpp includes the function declaration.
- It provides the actual implementation of add().

FILE 3: main.cpp

    #include <iostream>
    #include "math.h"

    int main()
    {
        std::cout << add(5, 3) << '\n';
        return 0;
    }

OUTPUT:
8

COMPILATION:
Compile both .cpp files together, for example:

    g++ main.cpp math.cpp -o main

Then run the resulting executable.

============================================================
7. ANGLE BRACKETS VS DOUBLE QUOTES
============================================================

ANGLE BRACKETS:

    #include <iostream>

Commonly used for standard library headers.

DOUBLE QUOTES:

    #include "math.h"

Commonly used for project headers.

The exact search rules depend on the compiler and its
include-path configuration.

============================================================
8. DECLARATION VS DEFINITION
============================================================

DECLARATION:
Introduces a name and tells the compiler about it.

Example:

    int add(int a, int b);

This tells the compiler that add() is a function that
takes two integers and returns an integer.

DEFINITION:
Provides the actual implementation of the function.

Example:

    int add(int a, int b)
    {
        return a + b;
    }

MAIN DIFFERENCE:

    Declaration -> Tells what is available.
    Definition  -> Provides the implementation.

============================================================
9. IMPORTANT POINTS TO REMEMBER
============================================================

1. Header files commonly use .h or .hpp extensions.
2. Header files allow declarations to be shared.
3. #include makes another file's contents available.
4. <iostream> provides declarations needed for std::cout.
5. Use quotation marks commonly for your own headers.
6. Use angle brackets commonly for standard library headers.
7. A function declaration does not necessarily provide
   its implementation.
8. Header files help organize multi-file projects.
9. Header guards prevent repeated inclusion of a header's
   contents within one translation unit.
10. Source files containing implementations are compiled
    and linked to build the final program.

============================================================
                    END OF NOTES
============================================================
*/
