
 // ============================================================
 // 4.5.4 — UNSIGNED WRAPAROUND
 // ============================================================

 // Unsigned arithmetic wraps around when a result exceeds
 // the representable range or goes below zero.

 // For an 8-bit unsigned integer, the range is 0 to 255.

 // Examples:
 // 255 + 1 -> 0
 // 256     -> 0 when converted to an 8-bit unsigned value
 // 257     -> 1 when converted to an 8-bit unsigned value
 // 0 - 1   -> 255 in 8-bit unsigned arithmetic

 // This behavior is defined by C++ for unsigned arithmetic.
 // Mathematically, the result wraps modulo 2^n for an n-bit
 // unsigned type.

 // Example:
 // unsigned int x { 0 };
 // --x; // Wraps to UINT_MAX

 // IMPORTANT:
 // Unsigned wraparound is not undefined behavior.
 // However, it can produce unintended results and bugs.
