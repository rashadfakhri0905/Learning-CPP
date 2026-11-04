
 // ============================================================
 // 4.3.2 — FUNDAMENTAL DATA TYPE SIZES
 // ============================================================

 // The C++ standard specifies minimum sizes for fundamental types,
 // but most exact sizes depend on the implementation.

 // TYPICAL SIZES ON MANY MODERN SYSTEMS:
 // bool        -> 1 byte
 // char        -> 1 byte
 // short       -> 2 bytes
 // int         -> 4 bytes
 // long        -> 4 or 8 bytes
 // long long   -> 8 bytes
 // float       -> 4 bytes
 // double      -> 8 bytes
 // long double -> 8, 12, or 16 bytes

 // IMPORTANT:
 // These are typical sizes, NOT guaranteed sizes.
 // Your compiler, operating system, and target architecture
 // can affect the results.

 // C++ GUARANTEES:
 // - sizeof(char) is always 1 byte.
 // - A byte contains at least 8 bits.
 // - sizeof returns sizes in bytes.
 // - Objects occupy at least 1 byte.

 // CHAR_BIT:
 // Defined in <climits>; gives the number of bits in one byte.

 // EXAMPLE:
 // #include <climits>
 // std::cout << CHAR_BIT;
 // On most modern systems, this prints 8.

 // BEST PRACTICE:
 // Do not assume exact type sizes when portability matters.
 // Check sizes on the target system when necessary.
