// 4.6 — Quick Revision
//
// int:
// Use for ordinary integers when its range is sufficient.
//
// std::int32_t:
// Use when you need a signed integer with exactly 32 bits.
//
// std::uint32_t:
// Use when you need an unsigned integer with exactly 32 bits.
//
// std::size_t:
// Use for object sizes and lengths; sizeof returns this type.
//
// <cstdint>:
// Header for fixed-width, fast, and least integer types.
//
// <cstddef>:
// Recommended header when explicitly using std::size_t.
//
// Remember:
// std::int8_t and std::uint8_t may behave like characters.
// Prefer int for ordinary integers unless a specific range
// or width is required.