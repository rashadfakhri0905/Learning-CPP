
/*
============================================================
LEARNCPP: SOURCE FILES SHOULD INCLUDE THEIR PAIRED HEADER
============================================================

DEFINITION
----------
A paired header is the header file associated with a source
file, usually sharing the same base name.

Example:
    add.h  -> add.cpp
    math.h -> math.cpp

BEST PRACTICE:
Source files should #include their paired header file
if one exists.


============================================================
1. EXAMPLE PROJECT
============================================================

We have three files:

1. add.h
2. add.cpp
3. main.cpp


-------------------- add.h --------------------

int add(int x, int y);

This is a function declaration (forward declaration).
It tells the compiler:
- Function name: add
- Parameters: two int values
- Return type: int

It does NOT provide the function's implementation.


-------------------- main.cpp --------------------

#include "add.h"
#include <iostream>

int main()
{
    std::cout << add(3, 4) << '\n';
    return 0;
}

main.cpp includes add.h so the compiler knows how
the add() function can be called.


-------------------- add.cpp --------------------

#include "add.h"

double add(int x, int y)
{
    return x + y;
}

There is a mistake here!

The header declares:
    int add(int x, int y);

But the source file defines:
    double add(int x, int y);

The return types do not match.


============================================================
2. HOW DOES INCLUDING THE HEADER HELP?
============================================================

Step 1:
The preprocessor encounters:
    #include "add.h"

Step 2:
It inserts the contents of add.h at that location.

Therefore, add.cpp effectively contains:

    int add(int x, int y);

    double add(int x, int y)
    {
        return x + y;
    }

Step 3:
The compiler sees two declarations of the same function
that differ only in their return types.

C++ does not allow functions to be overloaded based
only on their return types.

Therefore, compilation fails.

IMPORTANT:
The error is detected during compilation rather than
being left for the linker to discover later.


============================================================
3. WHAT IF WE DO NOT INCLUDE THE HEADER?
============================================================

Suppose add.cpp is written as:

double add(int x, int y)
{
    return x + y;
}

Now add.cpp does not see the declaration in add.h.

The compiler can compile this definition independently.

However, main.cpp expects a function declared as:

int add(int x, int y);

The compiled program can then fail during linking because
the caller and definition do not agree on the function
being called.

This is why including the paired header is helpful:
it lets the compiler detect the mismatch earlier.


============================================================
4. WHAT IF A PARAMETER TYPE IS DIFFERENT?
============================================================

Header:
    int add(int x, int y);

Source:
    int add(int x, double y)
    {
        return x + static_cast<int>(y);
    }

These are different function signatures.

C++ supports function overloading, so the compiler may
interpret them as two separate functions rather than
a conflicting declaration and definition.

Consequently, the compiler may accept the source file,
but the program can still fail at link time if the
function expected by main.cpp has no matching definition.

This demonstrates that including the header helps detect
many mistakes, but it cannot detect every possible mismatch.


============================================================
5. WHY IS THIS ALSO SOMETIMES NECESSARY?
============================================================

A source file may depend on definitions or declarations
provided by its paired header.

For example, a header might define a class or declare
a type that the source file uses.

Without including that header, the source file might
not compile at all.

Therefore, including the paired header is not only about
checking function declarations. It can also provide
the declarations and types required by the source file.


============================================================
6. DOES THIS CAUSE AN ODR VIOLATION?
============================================================

No, not when the header contains only a function declaration.

Header:
    int add(int x, int y);

Source:
    #include "add.h"

    int add(int x, int y)
    {
        return x + y;
    }

Multiple compatible declarations are allowed.
There is still only one definition of the ordinary
non-inline add() function across the program.

Including a header does not automatically create an
ODR violation.


============================================================
FINAL SUMMARY
============================================================

1. A header commonly contains declarations shared by files.
2. A source file contains the implementation of functions.
3. Including the paired header lets the compiler compare
   its declarations with the source file's definitions.
4. This can catch errors during compilation rather than
   waiting until linking.
5. A different parameter type may be treated as a different
   overload, so not every mismatch is caught immediately.
6. Multiple compatible declarations do not violate the ODR.
7. Header guards help prevent repeated inclusion within
   one translation unit; they do not replace this practice.

BEST PRACTICE:
Source files should #include their paired header file
if one exists.
*/
