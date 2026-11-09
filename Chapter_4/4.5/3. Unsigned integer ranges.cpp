
 // ============================================================
 // 4.5.3 — UNSIGNED INTEGER RANGES
 // ============================================================

 // An n-bit unsigned integer has a range of:
 // 0 to (2^n) - 1

 // EXAMPLES:
 // 8-bit  -> 0 to 255
 // 16-bit -> 0 to 65,535
 // 32-bit -> 0 to 4,294,967,295
 // 64-bit -> 0 to 18,446,744,073,709,551,615

 // COMPARISON:
 // 8-bit signed   -> -128 to 127
 // 8-bit unsigned -> 0 to 255

 // Both can represent 256 distinct values.
 // Unsigned integers use the entire range for non-negative values.

 // IMPORTANT:
 // These ranges assume the stated bit widths.
 // Actual type sizes depend on the implementation.
