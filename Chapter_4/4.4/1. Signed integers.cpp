
 // ============================================================
 // 4.4.1 — SIGNED INTEGERS
 // ============================================================

 // An integer represents a whole number, including negative
 // numbers, zero, and positive numbers.

 // C++ provides four primary standard integer types:
 // short, int, long, long long

 // Their minimum guaranteed widths are different:
 // short      -> at least 16 bits
 // int        -> at least 16 bits
 // long       -> at least 32 bits
 // long long  -> at least 64 bits

 // The exact sizes depend on the implementation.
 // On many modern systems, int is 32 bits.

 // SIGNED INTEGER:
 // Can represent negative numbers, zero, and positive numbers.

 // Examples:
 short s { -10 };
 int i { 25 };
 long l { 1000L };
 long long ll { 5000000000LL };

 // By default, integer types are signed unless declared unsigned.
