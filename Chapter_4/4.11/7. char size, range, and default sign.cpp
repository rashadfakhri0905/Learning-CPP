// 4.11 — char Size, Range, and Default Sign
//
// char is always 1 byte in size.
//
// However, whether plain char is signed or unsigned
// is implementation-defined.
//
// Usually, plain char is signed, but you should not
// depend on this.
//
// If using char to store ASCII characters,
// signedness does not matter because ASCII values
// are between 0 and 127.
//
// If using char to store small integers,
// explicitly specify the sign:
//
// signed char:
// Range: -128 to 127
//
// unsigned char:
// Range: 0 to 255
//
// Best practice:
// Do not use char as a small integer type unless
// you have a specific reason.