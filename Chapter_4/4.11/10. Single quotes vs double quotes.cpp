// 4.11 — Single Quotes vs Double Quotes
//
// Single quotes represent a single character (char literal).
//
// Examples:
// 'A'
// '5'
// '+'
// '\n'
//
// Double quotes represent a C-style string literal.
//
// Examples:
// "Hello"
// "A"
// "123"
//
// Important difference:
//
// 'A'  -> One character
// "A"  -> A string containing a character and a null terminator
//
// Best practice:
// Use single quotes for individual characters.
//
// Example:
// char grade { 'A' };
//
// Use double quotes for text.
//
// Example:
// std::cout << "Hello World";
//
// When outputting text, using double quotes consistently
// can also help avoid accidental multicharacter literals.