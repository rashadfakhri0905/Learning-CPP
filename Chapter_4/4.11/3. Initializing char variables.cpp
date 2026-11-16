// 4.11 — Initializing char Variables
//
// Preferred way: use character literals.
//
// char ch { 'a' };
//
// You can also initialize a char using an integer:
//
// char ch { 97 }; // ASCII code for 'a'
//
// However, using character literals is preferred
// because they make the code easier to understand.
//
// Important difference:
//
// char a { 5 };   // Stores integer value 5
// char b { '5' }; // Stores character code for '5' (ASCII 53)
//
// These are NOT the same.
//
// Use:
// '5' when representing the digit as text.
// 5   when representing the number mathematically.