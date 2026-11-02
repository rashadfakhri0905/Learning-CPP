
/*
==================================================
LEARNCPP: INCLUDING HEADERS FROM OTHER DIRECTORIES
VS CODE IDE (G++)
==================================================

1. THE PROBLEM

Suppose your project has this structure:

MyProject/
    main.cpp
    source/
        includes/
            myHeader.h

To include myHeader.h directly, you could write:

    #include "source/includes/myHeader.h"

However, if you change the folder structure, you must
update the path in your source code.


2. RECOMMENDED METHOD: INCLUDE PATH

Configure the compiler to search additional directories.

In VS Code, open your .vscode/tasks.json file.

Add this argument inside the compiler task's "args" array:

    "-I./source/includes",

Example:

    "args": [
        "-g",
        "${file}",
        "-I./source/includes",
        "-o",
        "${fileDirname}/${fileBasenameNoExtension}.exe"
    ]

IMPORTANT:
- Put the argument inside the compiler task's "args".
- The path is relative to the compiler's working directory.
- Ensure your task compiles all required .cpp files.


3. INCLUDE THE HEADER

Once the include path is configured, write:

    #include "myHeader.h"

The compiler searches the specified include directory
for myHeader.h.


4. WHAT DOES -I MEAN?

    -I./source/includes

-I tells the compiler to search an additional directory
for header files.

For an absolute path, use something like:

    -IC:/MyProject/source/includes


BEST PRACTICE:
Configure include paths in tasks.json instead of
repeating long directory paths in your source files.

NOTE:
tasks.json configures compilation. If IntelliSense still
shows missing-header warnings, configure the includePath
in .vscode/c_cpp_properties.json as well.
*/
