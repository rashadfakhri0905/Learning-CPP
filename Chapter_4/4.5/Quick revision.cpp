
 // ============================================================
 // 4.5 — QUICK REVISION
 // ============================================================

 // unsigned -> Represents non-negative integer values.
 // Range     -> 0 to (2^n) - 1 for an n-bit unsigned integer.
 // Wraparound -> Unsigned arithmetic wraps modulo 2^n.
 //
 // Main risks:
 // 1. Subtraction can produce unexpectedly large values.
 // 2. Mixing signed and unsigned values can cause bugs.
 // 3. Decrementing zero wraps to the maximum value.
 //
 // BEST PRACTICE:
 // Favor signed integers for ordinary quantities and arithmetic.
 // Avoid mixing signed and unsigned types.
 // Use unsigned when bit manipulation, modular arithmetic,
 // or an API specifically requires it.
