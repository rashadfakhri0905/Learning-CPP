
 // ============================================================
 // 4.2.2 — VOID FUNCTIONS
 // ============================================================

 // A void function performs an operation without returning a value.

 #include <iostream>

 void printNumber(int number)
 {
     std::cout << number << '\n';
     // No return value is required.
 }

 // Calling the function:
 // printNumber(10);

 // INVALID:
 // void getNumber()
 // {
 //     return 10; // ERROR: cannot return a value from a void function
 // }

 // NOTE:
 // A void function can use "return;" to exit early,
 // but it cannot return a value.
