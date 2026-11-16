// 4.12 — Quick Revision
//
// Type conversion:
// Changing a value from one data type to another.
//
// Implicit conversion:
// Happens automatically.
//
// Explicit conversion:
// Requested by the programmer.
//
// Widening:
// Conversion to a type that can generally represent
// a wider range or greater precision.
//
// Narrowing:
// Conversion that may lose information.
//
// static_cast:
// Used for explicit type conversion.
//
// Syntax:
// static_cast<type>(expression)
//
// Floating point to integer:
// Fractional part is discarded (truncation).
//
// Signed to unsigned:
// Conversion follows modulo 2^N rules.
//
// Best practices:
// 1. Prefer static_cast over C-style casts.
// 2. Avoid unnecessary conversions.
// 3. Be careful with narrowing conversions.
// 4. Be careful when mixing signed and unsigned values.
// 5. Remember that conversion produces a new value.