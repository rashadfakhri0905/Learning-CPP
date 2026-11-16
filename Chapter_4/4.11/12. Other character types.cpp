// 4.11 — Other Character Types
//
// C++ provides additional character types for representing
// characters from different character sets.
//
// wchar_t:
// Wide character type.
// Its size is implementation-defined.
// Usually best avoided except when interfacing with
// certain platform-specific APIs, such as Windows APIs.
//
// char8_t:
// Added in C++20.
// Used for UTF-8 character encoding.
//
// char16_t:
// Used for UTF-16 character encoding.
//
// char32_t:
// Used for UTF-32 character encoding.
//
// Unicode:
// A standard that assigns code points to characters
// from many languages and symbol sets.
//
// UTF-8, UTF-16, and UTF-32 are ways of encoding Unicode.
//
// Beginner advice:
// Use ordinary char for basic ASCII characters.
// Learn the other character types when working with
// Unicode or international text.