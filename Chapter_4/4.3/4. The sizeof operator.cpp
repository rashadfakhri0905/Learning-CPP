
 // ============================================================
 // 4.3.4 — THE sizeof OPERATOR
 // ============================================================

 // PURPOSE:
 // sizeof determines the size of a type or object in bytes.

 // SYNTAX:
 // sizeof(type)
 // sizeof(object)

 // EXAMPLE:
 // #include <iostream>
 //
 // int main()
 // {
 //     int x {};
 //
 //     std::cout << sizeof(int) << '\n';
 //     std::cout << sizeof(x) << '\n';
 // }

 // On many modern systems, both expressions print 4.

 // RULES:
 // 1. Use parentheses around a type name: sizeof(int).
 // 2. Parentheses around an object are optional: sizeof x.
 // 3. The result's type is std::size_t.
 // 4. sizeof(void) is invalid in standard C++.
 // 5. sizeof cannot be applied to a function itself.
 // 6. sizeof on a reference gives the size of the referenced type.

 // IMPORTANT:
 // sizeof measures an object's size, not necessarily all memory
 // associated with it. Dynamically allocated memory is not included.

 // BEST PRACTICE:
 // Use sizeof instead of assuming an object's exact size.
