
 // ============================================================
 // 4.1.4 — INTEGER TYPES VS INTEGRAL TYPES
 // ============================================================

 // MATHEMATICAL INTEGER:
 // A whole number with no fractional part.
 // Examples: -5, 0, 12.

 // STANDARD INTEGER TYPES:
 // short, int, long, long long
 // Includes their signed and unsigned variants.

 // INTEGRAL TYPES:
 // bool + character types + standard integer types.

 // EXAMPLES:
 int number { 65 };
 bool isValid { true };
 char letter { 'A' };

 // All three variables use integral types, but their meanings
 // and output behavior differ.

 // IMPORTANT DISTINCTION:
 // Every standard integer type is integral.
 // bool and character types are integral, but are not normally
 // called standard integer types.

 // ENUMERATIONS:
 // enum and enum class are not integral types, even though
 // enumerations can use integer types as their underlying type.

 // TERMINOLOGY:
 // The C++ standard sometimes uses "integer types" to mean
 // all integral types. Conventionally, this term often refers
 // only to the standard integer types.

 // KEY POINT:
 // Integral is the broader category.
