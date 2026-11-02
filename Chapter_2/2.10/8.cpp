
/*
============================================================
       MACRO SUBSTITUTION WITHIN PREPROCESSOR COMMANDS
============================================================

1. WHAT IS MACRO SUBSTITUTION?
------------------------------------------------------------

DEFINITION:
Macro substitution is the process in which the preprocessor
replaces a macro identifier with its defined replacement
text before the compiler compiles the program.

EXAMPLE:

    #define FOO 9

    std::cout << FOO;

After macro substitution, the statement becomes:

    std::cout << 9;

OUTPUT:
9

============================================================
2. MACRO SUBSTITUTION IN #ifdef
============================================================

Consider:

    #define PRINT_JOE

    #ifdef PRINT_JOE
        std::cout << "Joe\n";
    #endif

QUESTION:
PRINT_JOE is defined as nothing. Why does the preprocessor
not replace PRINT_JOE with nothing inside #ifdef?

ANSWER:
Macro substitution does not occur in the macro name
being tested by #ifdef or #ifndef.

#ifdef checks whether the identifier PRINT_JOE has been
defined as a macro, not what replacement text it contains.

Therefore, the code inside the block is included.

OUTPUT:
Joe

IMPORTANT:
A macro can be defined without a replacement value and
still be detected by #ifdef.

============================================================
3. DIFFERENCE BETWEEN #ifdef AND NORMAL CODE
============================================================

EXAMPLE:

    #define FOO 9

    #ifdef FOO
        std::cout << FOO << '\n';
    #endif

OUTPUT:
9

EXPLANATION:

A. #ifdef FOO

    The preprocessor checks whether FOO is defined.
    It does not replace FOO with 9 in the directive.

B. std::cout << FOO << '\n';

    This is normal source code.
    The preprocessor replaces FOO with 9.

The effective code sent to the compiler is:

    std::cout << 9 << '\n';

============================================================
4. MACRO SUBSTITUTION IN #if AND #elif
============================================================

IMPORTANT EXCEPTION:
In #if and #elif expressions, macros are generally
expanded before the expression is evaluated.

EXAMPLE:

    #define FOO 9

    #if FOO == 9
        std::cout << "FOO is 9\n";
    #endif

OUTPUT:
FOO is 9

EXPLANATION:
1. FOO is replaced with 9 in the #if expression.
2. The preprocessor evaluates 9 == 9.
3. The condition is true.
4. The code is included in compilation.

============================================================
5. COMPARISON TABLE
============================================================

#ifdef FOO
    Checks whether FOO is defined.
    Does not expand the tested macro name.

#ifndef FOO
    Checks whether FOO is not defined.
    Does not expand the tested macro name.

#if FOO == 9
    Expands FOO to 9, then evaluates the expression.

#elif FOO == 9
    Expands FOO in the expression, then evaluates it.

Normal source code:
    std::cout << FOO;
    Expands FOO to its replacement text.

============================================================
6. COMPLETE WORKING PROGRAM
============================================================
*/

#include <iostream>

#define FOO 9
#define PRINT_JOE

int main()
{
    #ifdef PRINT_JOE
        std::cout << "Joe\n";
    #endif

    #ifdef FOO
        std::cout << FOO << '\n';
    #endif

    #if FOO == 9
        std::cout << "FOO equals 9\n";
    #endif

    return 0;
}

/*
OUTPUT:

Joe
9
FOO equals 9

EXPLANATION:
1. PRINT_JOE is defined, so "Joe" is printed.
2. FOO is defined, so the second block is included.
3. FOO in normal code is replaced with 9.
4. FOO in the #if expression is replaced with 9.
5. The condition 9 == 9 is true, so the final message
   is printed.

============================================================
7. KEY POINTS TO REMEMBER
============================================================

1. #define creates a macro.
2. Macro substitution replaces a macro with its value.
3. #ifdef and #ifndef check whether a macro exists.
4. The macro name tested by #ifdef or #ifndef is not
   expanded as a replacement value.
5. Macros are expanded in #if and #elif expressions
   before those expressions are evaluated.
6. Macros in ordinary source code are also expanded.
7. A macro defined without a replacement value can still
   be checked using #ifdef.

============================================================
                    END OF NOTES
============================================================
*/
