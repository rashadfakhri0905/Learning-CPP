                                       // Macro #define //

// A macro is a rule that tells the preprocessor:
// "Whenever you see this name, replace it with this text."

// Two types of macros:
// 1. Object-like macros
// 2. Function-like macros
//
// Function-like macros behave somewhat like functions,
// but are generally considered unsafe. Normal functions
// should usually be used instead.

// Object-like macros:

#define MAX_VALUE 100
#define PI 3.14159

// When the preprocessor sees:
// MAX_VALUE
//
// It replaces it with:
// 100

// A macro can also have no replacement text:
#define DEBUG

// IMPORTANT:
// #define is a preprocessor directive, so NO semicolon is used.

// Macro naming convention:
// Use ALL CAPITAL letters and underscores between words.

#define MAX_SPEED 120
#define BUFFER_SIZE 256

// KEY IDEA:
// #define NAME replacement
// means: replace NAME with replacement text before compilation.