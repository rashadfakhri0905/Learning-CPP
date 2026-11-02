```
// HEADER GUARDS (INCLUDE GUARDS)

// Purpose:
// Prevent a header file from being included multiple times
// in the same translation unit, avoiding redefinition errors.

// Syntax:
#ifndef SQUARE_H  // If SQUARE_H is not defined
#define SQUARE_H  // Define SQUARE_H

// Declarations and suitable definitions go here

#endif // End of header guard

// How it works:
// 1. #ifndef checks whether the macro is undefined.
// 2. #define defines the macro on the first inclusion.
// 3. Header contents are included only on the first inclusion.
// 4. Later inclusions are skipped because the macro is defined.

// Naming convention:
// Use the header filename in uppercase, replacing punctuation
// with underscores. Example: square.h -> SQUARE_H.

// Best Practice:
// Use header guards in every header file.

// Note:
// Header guards prevent repeated inclusion within a translation
// unit. They do not prevent multiple-definition errors caused by
// defining non-inline functions in headers included by multiple
// translation units.
```