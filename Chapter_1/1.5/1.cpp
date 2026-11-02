#include <iostream>

int main()
{
    int x {10};

    std::cout << "Hello" << "World!" << std::endl;  // std::endl flushes the buffer and puts the cursor to the 
                                                    // new line. 
                                                    // This means this process is very slow.
                                                    // C++ output system is designed to flush buffer 
                                                    // periodically.
// \n is a special character that the compiler interprets as newline character.
// this is used for better performance!
   
    std::cout << "The value of x is " << x << '\n'; // single quoted (by itslef)(conventional)
    std::cout << "Yep" << "\n";                     // double quoated (by itself)(unconventional but okay)
    std::cout << "Daim Fakhri is a bitch! \n";      // inside double quotes (conventional)
    // entering values in different lines do not result in output in seperate lines.

    return 0;
}