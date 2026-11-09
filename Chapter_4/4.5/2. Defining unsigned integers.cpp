
 // ============================================================
 // 4.5.2 — DEFINING UNSIGNED INTEGERS
 // ============================================================

 // Use the keyword unsigned before the integer type.

 unsigned short us { 10 };
 unsigned int ui { 100 };
 unsigned long ul { 1000UL };
 unsigned long long ull { 5000ULL };

 // The following are also valid:
 // unsigned short int
 // unsigned int
 // unsigned long int
 // unsigned long long int

 // BEST PRACTICE:
 // Put unsigned before the type name.
 // Use unsigned only when its non-negative range or wrapping
 // behavior is specifically needed.
