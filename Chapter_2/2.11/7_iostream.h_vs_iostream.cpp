
 /*
==================================================
WHY DOES iostream NOT HAVE A .h EXTENSION?
==================================================

1. HISTORICAL REASON

Originally, C++ standard library headers used .h extensions.

Example:
    #include <iostream.h>

Names such as cout and cin were placed in the global
namespace in the original header conventions.


2. INTRODUCTION OF THE std NAMESPACE

When C++ was standardized, standard library names were
placed in the std namespace to reduce naming conflicts.

New headers without .h were introduced:

    #include <iostream>

Now we write:

    std::cout
    std::cin

This allowed modern C++ to use the std namespace while
preserving compatibility with older code conventions.


3. MODERN HEADER NAMING

C++ headers:
    #include <iostream>
    #include <vector>
    #include <string>

C-compatible headers:
    #include <cstdio>
    #include <cstddef>
    #include <cstring>

The c-prefixed headers provide C library functionality
through modern C++ header conventions.


4. IMPORTANT DISTINCTION

<iostream> and <iostream.h> are different headers.

<iostream>:
- Standard C++ header.
- Declares standard stream names in namespace std.

<iostream.h>:
- Legacy, non-standard header.
- May not exist on modern compilers.

Similarly, <cstddef> is the modern C++ header, while
<stddef.h> is the C-compatible header.


BEST PRACTICE:
- Use standard library headers without .h for C++.
- Use c-prefixed headers for C library facilities in C++.
- Use .h for your own project headers, if that is your
  chosen naming convention.
*/
