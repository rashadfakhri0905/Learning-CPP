                             //Introduction to the preprocessor// 

// C++ Preprocessing

// Before a .cpp file is compiled, it goes through preprocessing.

// Process:
// .cpp file
//     ↓
// Preprocessor
//     ↓
// Translation Unit
//     ↓
// Compiler
//     ↓
// Object Code

// The preprocessor:
// 1. Removes comments.
// 2. Processes #include directives.
// 3. Makes other text-based changes.
// 4. Does NOT permanently modify the original .cpp file.

// After preprocessing, the resulting code is called a "translation unit".

// KEY IDEA:
// The compiler compiles the translation unit,
// not the original .cpp file directly.