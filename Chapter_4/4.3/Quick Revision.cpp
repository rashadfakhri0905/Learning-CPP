
 // ============================================================
 // 4.3 — QUICK REVISION
 // ============================================================

 // Object size       -> Memory occupied by an object, in bytes.
 // Byte              -> Typically 8 bits on modern systems.
 // sizeof(type)      -> Returns the size of a type in bytes.
 // sizeof(variable)  -> Returns the size of the variable's type.
 // std::size_t       -> Type returned by sizeof.
 // CHAR_BIT          -> Number of bits in one byte.
 //
 // Remember:
 // - Exact sizes can vary across implementations.
 // - sizeof(void) is invalid in standard C++.
 // - Smaller types are not always faster.
 // - sizeof does not include dynamically allocated memory
 //   owned by an object.
 // - Prefer correctness and maintainability over premature
 //   memory optimization.
