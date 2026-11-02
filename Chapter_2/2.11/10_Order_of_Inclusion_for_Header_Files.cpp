
/*
==================================================
LEARNCPP: ORDER OF HEADER INCLUSION
VS CODE / C++
==================================================

1. MAIN CONCEPT

Properly written headers should include all the headers
they need. Therefore, the order of #include directives
should not matter.

If a header forgets a required include, however, the
order may hide the mistake.


2. EXAMPLE OF A MISSING INCLUDE

// B.h
class Example {};

// A.h
// Uses Example but forgets to include "B.h"

// main.cpp
#include "B.h"
#include "A.h"

This might compile because B.h declares Example before
A.h uses it.

But reversing the order may cause a compilation error.
This reveals that A.h is missing a required include.


3. RECOMMENDED INCLUDE ORDER

In a source file such as add.cpp, use this order:

1. Paired header:
   #include "add.h"

2. Other project headers:
   #include "mymath.h"

3. Third-party library headers:
   #include <boost/tuple/tuple.hpp>

4. Standard library headers:
   #include <iostream>
   #include <string>

Sort headers alphabetically within each group.


4. WHY THIS ORDER?

Including the paired header first helps reveal missing
dependencies in that header.

If it compiles successfully on its own, there is less
chance that another header included earlier is hiding
a missing #include.


BEST PRACTICE:
Include the paired header first, then project headers,
third-party headers, and standard library headers.
Sort alphabetically within each group.
*/
