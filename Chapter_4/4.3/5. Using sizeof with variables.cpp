
 // ============================================================
 // 4.3.5 — sizeof WITH VARIABLES
 // ============================================================

 // sizeof can be used with a variable as well as a type.

 // EXAMPLE:
 // #include <iostream>
 //
 // int main()
 // {
 //     int x { 10 };
 //
 //     std::cout << sizeof(x) << " bytes\n";
 //     return 0;
 // }

 // If int occupies 4 bytes on your system, output is:
 // 4 bytes

 // sizeof does not evaluate its operand when the operand is
 // an expression. It determines the type's size.

 // IMPORTANT:
 // sizeof(std::string) gives the size of the string object itself,
 // not the memory used to store its dynamically allocated characters.
