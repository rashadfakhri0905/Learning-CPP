#include <iostream> // #include in a pre pre-processor statement or directive
                    // that indicates that we would like to use the content of 
                    // the iostream libarary(which is part of C++ Standard Library)
                    // that allows us to read and write from/to console.
int main()                      // main -> identifier.
                                // int -> This fn will produce a value who's type is 
                                // interger.
{                               // These curly bracket are used to define the body of a fn.
    std::cout << "Hello World!"; 
    return 0;                   // When a program is finished running it send a value back
                                // to the O.S. to indicate whether it ran properly or not. 
                                // 0 indicates it ran successfully.
}
