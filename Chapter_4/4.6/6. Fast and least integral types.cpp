// 4.6 — Fast and Least Integral Types
//
// These types are also declared in <cstdint>.
//
// Fast types:
// std::int_fast32_t
// std::uint_fast32_t
//
// They provide an integer type that is at least the requested
// width and is intended to be fast on the target system.
//
// Least types:
// std::int_least32_t
// std::uint_least32_t
//
// They provide the smallest integer type that is at least
// the requested width.
//
// Important:
// The actual sizes of fast and least types can vary by system.
// For example, std::int_fast16_t might be 32 bits rather
// than 16 bits.
//
// LearnCpp's recommendation:
// Prefer fixed-width types when you need a guaranteed range.
// Avoid fast and least types as a beginner unless you have
// a specific reason to use them.