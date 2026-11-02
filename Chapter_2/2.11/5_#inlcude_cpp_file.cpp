
/*
==================================================
DO NOT #include .cpp FILES
==================================================

RULE:
Avoid including .cpp files. Include header files (.h)
and compile source files (.cpp) separately.


1. CORRECT PROJECT STRUCTURE

add.h:
    int add(int x, int y);

add.cpp:
    #include "add.h"

    int add(int x, int y)
    {
        return x + y;
    }

main.cpp:
    #include <iostream>
    #include "add.h"

    int main()
    {
        std::cout << add(3, 4) << '\n';
        return 0;
    }

Compile both source files:
    g++ main.cpp add.cpp -o main


2. WHY AVOID #include "add.cpp"?

- ODR violations: Including a .cpp file in multiple
  translation units can cause duplicate definitions.

- Naming collisions: Definitions copied into multiple
  files may conflict.

- Compilation time: Changes to a .cpp file can force
  other files that include it to recompile.

- Convention: Headers provide shared declarations;
  source files provide implementations.


3. WHAT IF THE PROGRAM DOES NOT COMPILE?

If you compile only main.cpp:

    g++ main.cpp -o main

the linker may fail to find add(), because add.cpp
was not compiled.

Correct command:

    g++ main.cpp add.cpp -o main

In an IDE, ensure all required .cpp files are added
to the project and included in the build.


KEY DISTINCTION:
- #include "add.h" -> makes declarations available.
- Compile add.cpp -> compiles the implementation.
- Link -> combines compiled parts into the program.

BEST PRACTICE:
Avoid #including .cpp files. Compile them separately.
*/
