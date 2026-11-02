
/*
============================================================
           CONDITIONAL COMPILATION: #if 0 AND #if 1
============================================================

1. #if 0 — EXCLUDING CODE FROM COMPILATION
------------------------------------------------------------

DEFINITION:
#if 0 is a preprocessor directive used to temporarily
exclude a block of code from compilation.

Since 0 means false, the preprocessor ignores the code
between #if 0 and the matching #endif.

SYNTAX:

    #if 0
        // Code that should not be compiled
    #endif

EXAMPLE:
*/

#include <iostream>

int main()
{
    std::cout << "Joe\n";

    #if 0
        std::cout << "Bob\n";
        std::cout << "Steve\n";
    #endif

    return 0;
}

/*
OUTPUT:
Joe

EXPLANATION:
1. "Joe" is printed because it is outside the #if 0 block.
2. #if 0 evaluates to false.
3. The statements printing Bob and Steve are excluded.
4. #endif marks the end of the excluded block.

IMPORTANT:
Excluded code is not compiled or executed.

============================================================
2. WHY USE #if 0 INSTEAD OF COMMENTS?
============================================================

#if 0 can temporarily disable a large block of code
without deleting it.

It is especially useful when the code contains
multi-line comments.

C++ supports two common comment styles:

A. SINGLE-LINE COMMENT:
    // This is a comment

B. MULTI-LINE COMMENT:
    /*
    This is a multi-line comment.
    */

// IMPORTANT:
// Multi-line comments cannot be nested.

// For example, placing /* ... */ around code that already
// contains /* ... */ can cause problems because the compiler
// does not treat multi-line comments as nestable.

// #if 0 avoids this problem.

// EXAMPLE:


#include <iostream>

int main()
{
    std::cout << "Joe\n";

    #if 0
        std::cout << "Bob\n";

        /* Some
         * multi-line
         * comment here
         */

        std::cout << "Steve\n";
    #endif

    return 0;
}

/*
OUTPUT:
Joe

EXPLANATION:
The entire block between #if 0 and #endif is excluded.
Therefore, Bob and Steve are not printed, and the
multi-line comment inside the block causes no problem.

============================================================
3. #if 1 — RE-ENABLING CODE
============================================================

DEFINITION:
#if 1 is a preprocessor directive whose condition is true.

Therefore, the code between #if 1 and #endif is included
in compilation.

SYNTAX:

    #if 1
        // Code to be compiled
    #endif

EXAMPLE:
*/

#include <iostream>

int main()
{
    std::cout << "Joe\n";

    #if 1
        std::cout << "Bob\n";

        /* Some
         * multi-line
         * comment here
         */

        std::cout << "Steve\n";
    #endif

    return 0;
}

/*
OUTPUT:
Joe
Bob
Steve

EXPLANATION:
1. #if 1 evaluates to true.
2. The statements printing Bob and Steve are included.
3. The multi-line comment is ignored as a comment.
4. All three messages are printed.

To temporarily re-enable code, change #if 0 to #if 1.

============================================================
4. DIFFERENCE BETWEEN #if 0 AND #if 1
============================================================

#if 0:
    Condition is false.
    Code is excluded from compilation.

#if 1:
    Condition is true.
    Code is included in compilation.

============================================================
5. IMPORTANT POINTS TO REMEMBER
============================================================

1. #if 0 is commonly used to temporarily disable code.
2. #if 1 is used to include code unconditionally.
3. #endif closes the conditional block.
4. Code excluded by #if 0 is not compiled or executed.
5. #if 0 is useful when disabling code containing
   multi-line comments.
6. To re-enable the block, change #if 0 to #if 1.
7. Do not confuse #if 0 with if (0):
       #if 0  -> Excludes code before compilation.
       if (0) -> Code is compiled but not executed.

============================================================
                    END OF NOTES
============================================================
*/
