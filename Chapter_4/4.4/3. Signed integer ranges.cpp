
 // ============================================================
 // 4.4.3 — SIGNED INTEGER RANGES
 // ============================================================

 // RANGE:
 // The set of values a data type can represent.

 // For an n-bit signed integer using two's complement:
 //
 // Minimum = -(2^(n-1))
 // Maximum =  (2^(n-1)) - 1
 //
 // Examples:
 // 8-bit  -> -128 to 127
 // 16-bit -> -32,768 to 32,767
 // 32-bit -> -2,147,483,648 to 2,147,483,647
 //
 // An n-bit object can represent 2^n distinct bit patterns.
 // Signed types divide these between negative and non-negative
 // values, with one more negative value than positive values.
 //
 // IMPORTANT:
 // These example ranges assume two's-complement representation.
 // C++20 requires two's-complement for signed integers.
 // Use <limits> and std::numeric_limits<T> to query a type's range.
