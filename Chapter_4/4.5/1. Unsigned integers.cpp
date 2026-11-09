
 // ============================================================
 // 4.5.1 — UNSIGNED INTEGERS
 // ============================================================

 // Signed integers can represent negative, zero, and positive values.
 // Unsigned integers can represent zero and positive values only.

 // Use the keyword "unsigned" to declare an unsigned integer.

 unsigned short us { 10 };
 unsigned int ui { 100 };
 unsigned long ul { 1000UL };
 unsigned long long ull { 5000ULL };

 // An unsigned integer cannot represent a negative value.

 // BEST PRACTICE:
 // Prefer signed integers for ordinary arithmetic unless
 // unsigned behavior is specifically needed.
