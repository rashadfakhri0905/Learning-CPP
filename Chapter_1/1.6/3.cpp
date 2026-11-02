// Implementation-defined behaviour and unspecified behaviour

#include <iostream>

int main()
{
    std::cout <<sizeof(int) << '\n'; // prints how many bytes of memory an int value takes

    return 0;
}

// Best practice is to avoid implementation defined behaviour whenever possible,
// as they may cause your program to malfunction on other implementations
