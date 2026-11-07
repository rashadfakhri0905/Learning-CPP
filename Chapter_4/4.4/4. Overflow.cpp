
 // ============================================================
 // 4.4.4 — SIGNED INTEGER OVERFLOW
 // ============================================================

 // Overflow occurs when an arithmetic result is outside the
 // range representable by the type.

 // Signed integer overflow causes UNDEFINED BEHAVIOR.
 // The program's result cannot be relied upon.

 // Example (assuming 32-bit int):
 // int x { 2147483647 };
 // x = x + 1; // UNDEFINED BEHAVIOR: signed overflow

 // Do not assume overflow will wrap around to a negative value.

 // BEST PRACTICE:
 // Choose a type with a sufficient range.
 // Check values before performing potentially overflowing
 // arithmetic operations.
