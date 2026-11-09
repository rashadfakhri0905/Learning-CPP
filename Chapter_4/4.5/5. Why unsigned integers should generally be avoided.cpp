
 // ============================================================
 // 4.5.5 — WHY AVOID UNSIGNED INTEGERS?
 // ============================================================

 // REASON 1: SUBTRACTION CAN WRAP AROUND

 // unsigned int x { 2 };
 // unsigned int y { 3 };
 // std::cout << x - y;
 // On a system with 32-bit unsigned int, prints 4294967295.

 // Mathematical result: -1
 // Actual unsigned result: 4294967295

 // REASON 2: MIXING SIGNED AND UNSIGNED VALUES

 // int s { -1 };
 // unsigned int u { 1 };

 // if (s < u)
 // {
 //     // May not execute because s is converted to unsigned.
 // }

 // Mixing signed and unsigned integers can cause unexpected
 // comparisons and arithmetic results.

 // REASON 3: DECREMENTING BELOW ZERO

 // An unsigned variable cannot represent negative values.
 // Decrementing zero causes wraparound to its maximum value.

 // REASON 4: FUNCTION ARGUMENTS

 // Passing a negative value to an unsigned parameter converts
 // it to an unsigned value, potentially causing unexpected behavior.

 // BEST PRACTICE:
 // Prefer signed integers for ordinary quantities and arithmetic.
 // Avoid mixing signed and unsigned values.
