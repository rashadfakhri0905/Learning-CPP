
 // ============================================================
 // 4.5.6 — WHEN TO USE UNSIGNED INTEGERS
 // ============================================================

 // Unsigned types are useful when their specific behavior is needed.

 // 1. BIT MANIPULATION
 // Unsigned types are generally preferred for bitwise operations.

 // 2. MODULAR ARITHMETIC
 // Use unsigned wraparound when it is intentionally required,
 // such as in certain algorithms and random number generators.

 // 3. ARRAY INDEXING AND SIZES
 // Some C++ APIs use unsigned types for sizes and indices.
 // Follow the API's type requirements carefully.

 // 4. LOW-LEVEL AND EMBEDDED PROGRAMMING
 // Unsigned types are common when working with hardware registers,
 // bit fields, and values defined by hardware interfaces.

 // IMPORTANT:
 // Do not use unsigned merely because a quantity cannot be negative.
 // Signed types are often safer for ordinary arithmetic.
