// 4.6 — Best Practices for Integral Types
//
// 1. Prefer int when its range is sufficient and the exact
//    width does not matter.
//
//    Example:
//    int age { 20 };
//
// 2. Prefer std::int#_t when a specific signed integer range
//    is required.
//
//    Example:
//    std::int32_t population {};
//
// 3. Prefer std::uint#_t for bit manipulation or when
//    well-defined unsigned wraparound is specifically needed.
//
// 4. Avoid using unsigned types for ordinary quantities
//    unless there is a good reason.
//
// 5. Avoid short and long when a fixed-width type is needed.
//
// 6. Avoid the 8-bit fixed-width types for ordinary numeric
//    output because they may behave like character types.