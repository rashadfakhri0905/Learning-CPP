// 4.8 — NaN and Inf
//
// IEEE 754 floating point formats support special values:
//
// 1. Inf (Infinity)
//    Represents positive or negative infinity.
//
//    Examples:
//    +Inf
//    -Inf
//
// 2. NaN (Not a Number)
//    Represents a value that is not a valid mathematical number.
//
//    Example:
//    0.0 / 0.0
//
// 3. Signed zero
//    Floating point formats can represent both +0.0 and -0.0.
//
// Important:
// The way NaN and Inf are displayed depends on the platform.
//
// Best practice:
// Avoid division by 0.0, even if your compiler supports
// generating Inf or NaN.