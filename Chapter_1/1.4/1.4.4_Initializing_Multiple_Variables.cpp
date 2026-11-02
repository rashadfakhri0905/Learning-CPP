#include <iostream>

int main()
{
    int a = 5, b = 6;     // copy-initialization 
                          // Common Pitfall to avoid if use(this type not recommended)
                          // -> int a,b = 5; here a does not initialize as 5
                          // each variable must have it's own initializer to initialize
    int c (7), d (8);     // direct-initialization
    int e {9}, f {10};    // direct-list-initialization
    int i {}, j {};       // value-initialization

    return 0;
}