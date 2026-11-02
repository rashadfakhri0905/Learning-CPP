
/*
============================================================
  HEADER FILE DEFINITIONS AND THE ONE DEFINITION RULE (ODR)
============================================================

1. WHAT IS THE ONE DEFINITION RULE (ODR)?
------------------------------------------------------------

DEFINITION:
The One Definition Rule (ODR) is a C++ rule that restricts
how many definitions of the same entity can exist in a
program.

For an ordinary, non-inline function:
A program must not contain multiple definitions of that
function.

EXAMPLE:

    int add(int x, int y)
    {
        return x + y;
    }

This is a function DEFINITION because it contains the
actual implementation of add().

IMPORTANT:
A declaration tells the compiler about a function.
A definition provides the implementation.

============================================================
2. THE PROBLEM WITH DEFINITIONS IN HEADER FILES
============================================================

Suppose we create these three files:

    add.h
    add.cpp
    main.cpp

Consider the following header file.

FILE: add.h

    int add(int x, int y)
    {
        return x + y;
    }

IMPORTANT:
This header contains a function DEFINITION, not merely
a declaration.

Now consider main.cpp.

FILE: main.cpp

    #include "add.h"
    #include <iostream>

    int main()
    {
        std::cout << add(3, 4) << '\n';
        return 0;
    }

And add.cpp.

FILE: add.cpp

    #include "add.h"

============================================================
3. WHAT HAPPENS DURING PREPROCESSING?
============================================================

The #include directive makes the contents of add.h
available in each source file that includes it.

A) main.cpp AFTER PREPROCESSING:

    int add(int x, int y)
    {
        return x + y;
    }

    // iostream contents are included here

    int main()
    {
        std::cout << add(3, 4) << '\n';
        return 0;
    }

B) add.cpp AFTER PREPROCESSING:

    int add(int x, int y)
    {
        return x + y;
    }

Both source files now contain the definition of add().

============================================================
4. WHY DOES THE COMPILER NOT STOP THE PROGRAM?
============================================================

Each .cpp file is normally compiled independently.

When compiling main.cpp:
    The compiler sees one definition of add().
    This is valid.

When compiling add.cpp:
    The compiler sees one definition of add().
    This is also valid.

Neither source file, considered separately, necessarily
contains a duplicate definition.

The problem appears when the linker combines the
compiled object files.

============================================================
5. WHAT HAPPENS DURING LINKING?
============================================================

The linker discovers that both object files provide a
definition of the same ordinary function:

    main.cpp object file -> definition of add()
    add.cpp object file  -> definition of add()

This violates the One Definition Rule.

A typical linker error may look like:

    multiple definition of `add(int, int)'

The exact error message depends on the toolchain.

RESULT:
The program fails to link and an executable is not
successfully produced.

============================================================
6. THE CORRECT WAY: DECLARATION IN HEADER,
   DEFINITION IN SOURCE FILE
============================================================

Use this structure instead:

    add.h
    add.cpp
    main.cpp

------------------------------------------------------------
FILE: add.h
------------------------------------------------------------

#ifndef ADD_H
#define ADD_H

int add(int x, int y);

#endif

EXPLANATION:
This header contains only the function declaration.

------------------------------------------------------------
FILE: add.cpp
------------------------------------------------------------

#include "add.h"

int add(int x, int y)
{
    return x + y;
}

EXPLANATION:
The actual implementation is defined in add.cpp.

------------------------------------------------------------
FILE: main.cpp
------------------------------------------------------------

#include <iostream>
#include "add.h"

int main()
{
    std::cout << "The sum of 3 and 4 is "
              << add(3, 4) << '\n';

    return 0;
}

OUTPUT:

The sum of 3 and 4 is 7

============================================================
7. HOW DOES THE CORRECT VERSION WORK?
============================================================

1. main.cpp includes add.h.
2. The compiler sees the declaration of add().
3. main.cpp can call add(3, 4).
4. add.cpp includes the same header.
5. add.cpp provides the single ordinary definition of add().
6. The linker connects the function call to that definition.

The declaration can appear in multiple source files,
but the ordinary function definition is provided only once.

============================================================
8. DO HEADER GUARDS SOLVE THIS PROBLEM?
============================================================

NO!

Header guards prevent repeated inclusion of a header
within the same preprocessing translation unit.

Example:

    #ifndef ADD_H
    #define ADD_H

    int add(int x, int y);

    #endif

However, main.cpp and add.cpp are separate translation
units. Each can include add.h independently.

If add.h contains an ordinary function definition,
both translation units can still contain that definition.

Therefore:
    Header guards prevent repeated inclusion within a
    translation unit.

    They do NOT automatically prevent multiple function
    definitions across different translation units.

============================================================
9. ARE DEFINITIONS EVER ALLOWED IN HEADER FILES?
============================================================

YES!

Some definitions can safely appear in headers when
C++ rules permit it.

Examples include:
    1. Inline functions
    2. Inline variables (C++17 and later)
    3. Class and other type definitions
    4. Templates, subject to their applicable ODR rules

Example of an inline function:

    inline int add(int x, int y)
    {
        return x + y;
    }

An inline function can have identical definitions in
multiple translation units, provided the ODR requirements
are satisfied.

IMPORTANT:
The inline keyword does not simply mean that the compiler
must insert the function's code at every call.

For now, prefer placing ordinary function declarations
in headers and their definitions in .cpp files.

============================================================
10. KEY POINTS TO REMEMBER
============================================================

1. ODR stands for One Definition Rule.
2. An ordinary non-inline function must not have multiple
   definitions in the same program.
3. #include makes header contents available in a source file.
4. Including an ordinary function definition in multiple
   .cpp files can produce multiple definitions.
5. The individual files may compile successfully, but
   linking can fail.
6. Header guards do not solve cross-file ODR violations.
7. Put ordinary function declarations in header files.
8. Put ordinary function definitions in one .cpp file.
9. Certain definitions, such as inline functions and
   templates, can be defined in headers under the
   applicable C++ rules.

============================================================
                    END OF NOTES
============================================================
*/
