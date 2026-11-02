
/*
============================================================
           CONDITIONAL PREPROCESSOR DIRECTIVES
============================================================

DEFINITION:
Conditional preprocessor directives control which parts of
the source code are included in compilation.

The preprocessor checks these directives BEFORE the compiler
compiles the program.

The main directives are:
    1. #ifdef
    2. #ifndef
    3. #endif
    4. #if defined()
    5. #if !defined()

============================================================
1. #ifdef  (IF DEFINED)
============================================================

DEFINITION:
#ifdef checks whether a macro has been defined using #define.

SYNTAX:

    #ifdef MACRO_NAME
        // Code to include if the macro is defined
    #endif

EXAMPLE:

    #define PRINT_JOE

    #ifdef PRINT_JOE
        std::cout << "Joe\n";
    #endif

OUTPUT:
    Joe

EXPLANATION:
PRINT_JOE is defined, so the preprocessor includes the
cout statement in the code sent to the compiler.

If PRINT_JOE were not defined, the statement would be
excluded from compilation.


============================================================
2. #ifndef  (IF NOT DEFINED)
============================================================

DEFINITION:
#ifndef checks whether a macro has NOT been defined.

SYNTAX:

    #ifndef MACRO_NAME
        // Code to include if the macro is not defined
    #endif

EXAMPLE:

    #ifndef PRINT_BOB
        std::cout << "Bob\n";
    #endif

OUTPUT:
    Bob

EXPLANATION:
PRINT_BOB has not been defined, so the cout statement
is included in compilation.

If PRINT_BOB were defined, the statement would be excluded.


============================================================
3. #endif  (END OF CONDITIONAL BLOCK)
============================================================

DEFINITION:
#endif marks the end of a conditional preprocessor block.

EXAMPLE:

    #ifdef DEBUG
        std::cout << "Debug mode\n";
    #endif

The #endif indicates where the conditional block ends.

Every #ifdef and #ifndef must have a matching #endif.


============================================================
4. #if defined(MACRO_NAME)
============================================================

DEFINITION:
This checks whether a macro has been defined.

It is equivalent to:

    #ifdef MACRO_NAME

EXAMPLE:

    #define DEBUG

    #if defined(DEBUG)
        std::cout << "Debug mode\n";
    #endif

OUTPUT:
    Debug mode

The code is included because DEBUG is defined.


============================================================
5. #if !defined(MACRO_NAME)
============================================================

DEFINITION:
This checks whether a macro has NOT been defined.

It is equivalent to:

    #ifndef MACRO_NAME

The ! symbol means NOT.

EXAMPLE:

    #if !defined(RELEASE)
        std::cout << "Release is not defined\n";
    #endif

OUTPUT:
    Release is not defined

The code is included because RELEASE is not defined.


============================================================
6. DIFFERENCE BETWEEN #ifdef AND #ifndef
============================================================

#ifdef X:
    Checks whether X IS defined.

#ifndef X:
    Checks whether X is NOT defined.

Example:

    #define FEATURE

    #ifdef FEATURE
        // Included because FEATURE is defined
    #endif

    #ifndef FEATURE
        // Excluded because FEATURE is defined
    #endif


============================================================
7. COMPLETE WORKING PROGRAM
============================================================
*/

#include <iostream>

#define PRINT_JOE

int main()
{
    #ifdef PRINT_JOE
        std::cout << "Joe\n";
    #endif

    #ifdef PRINT_BOB
        std::cout << "Bob\n";
    #endif

    #ifndef PRINT_BOB
        std::cout << "Bob is not defined\n";
    #endif

    #if defined(PRINT_JOE)
        std::cout << "Joe is defined\n";
    #endif

    #if !defined(PRINT_BOB)
        std::cout << "PRINT_BOB is not defined\n";
    #endif

    return 0;
}

/*
OUTPUT:

Joe
Bob is not defined
Joe is defined
PRINT_BOB is not defined


============================================================
IMPORTANT POINTS
============================================================

1. #ifdef means IF DEFINED.
2. #ifndef means IF NOT DEFINED.
3. #endif closes a conditional block.
4. #if defined(X) is equivalent to #ifdef X.
5. #if !defined(X) is equivalent to #ifndef X.
6. These directives are processed before compilation.
7. Excluded code is not compiled.
8. Conditional preprocessor directives are different from
   normal if statements, which control execution at runtime.

============================================================
                    END OF NOTES
============================================================
*/
