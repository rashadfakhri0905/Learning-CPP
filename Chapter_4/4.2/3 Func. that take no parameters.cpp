
 // ============================================================
 // 4.2.3 — FUNCTIONS WITH NO PARAMETERS
 // ============================================================

 // In C++, use empty parentheses to indicate no parameters.

 int getValue()
 {
     return 10;
 }

 // Calling:
 // int result { getValue() };

 // OLD STYLE:
 // int getValue(void); // Compiles in C++, but is not preferred.

 // BEST PRACTICE:
 // Use functionName() rather than functionName(void)
 // when declaring a function that takes no parameters.

 // IMPORTANT:
 // void as a return type means "returns no value".
 // Empty parentheses mean "takes no parameters".
