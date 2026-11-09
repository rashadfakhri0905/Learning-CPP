// 4.6 — Fixed-Width Integers
//
// Fixed-width integer types have a specific width when supported.
// They are declared in the <cstdint> header.
//
// Signed types:
// std::int8_t   // 8-bit signed integer
// std::int16_t  // 16-bit signed integer
// std::int32_t  // 32-bit signed integer
// std::int64_t  // 64-bit signed integer
//
// Unsigned types:
// std::uint8_t  // 8-bit unsigned integer
// std::uint16_t // 16-bit unsigned integer
// std::uint32_t // 32-bit unsigned integer
// std::uint64_t // 64-bit unsigned integer
//
// Example:
// #include <cstdint>
//
// std::int32_t score { 32768 };
//
// Use std::int#_t when you need a guaranteed integer range.
// These exact-width types are only available on platforms
// that support the required width.