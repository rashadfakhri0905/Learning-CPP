
/*
==================================================
LEARNCPP: TRANSITIVE INCLUDES
VS CODE / C++
==================================================

DEFINITION:
A transitive include occurs when a header file includes
another header file, making its contents indirectly
available to your source file.


EXAMPLE:

// myHeader.h
#include <iostream>
#include <string>


// main.cpp
#include "myHeader.h"

int main()
{
    std::string name {"Alex"};
    std::cout << name << '\n';
    return 0;
}

Here, main.cpp gets access to <iostream> and <string>
through myHeader.h. These are transitive includes.


WHY NOT RELY ON THEM?
- A header may stop including another header in the future.
- Different compilers may include different dependencies.
- Your code might compile now but fail later.


BETTER APPROACH:

// main.cpp
#include <iostream>
#include <string>
#include "myHeader.h"

int main()
{
    std::string name {"Alex"};
    std::cout << name << '\n';
    return 0;
}

Now main.cpp explicitly includes the standard headers
it needs, instead of relying on myHeader.h to include them.


BEST PRACTICE:
Each source or header file should explicitly include
the headers it directly needs. Do not rely on transitive
includes unless the documentation specifically requires it.
*/
