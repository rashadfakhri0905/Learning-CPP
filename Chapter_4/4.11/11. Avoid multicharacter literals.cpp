// 4.11 — Avoid Multicharacter Literals
//
// A multicharacter literal contains more than one character
// inside single quotes.
//
// Example:
// 'AB'
// '56'
//
// These are not standard single-character literals.
// Their values are implementation-defined.
//
// Different compilers may give them different values.
//
// Common beginner mistake:
//
// std::cout << '/n';
//
// This is NOT a newline escape sequence.
// It is a multicharacter literal containing '/' and 'n'.
//
// Correct:
//
// std::cout << '\n';
//
// Another mistake:
//
// std::cout << '!\n';
//
// Correct:
//
// std::cout << "!\n";
//
// Best practice:
// Never place multiple ordinary characters inside
// single quotes.
//
// Use double quotes when outputting multiple characters.