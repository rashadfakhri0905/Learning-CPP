// 4.6 — Why Integer Sizes Matter
//
// The sizes of fundamental integer types such as int can vary
// between systems and compilers.
//
// For example, int is commonly 32 bits on modern systems,
// but C++ only guarantees a minimum size.
//
// If you assume an int is always 32 bits, your program may
// behave differently on a system where int is smaller.
//
// Key idea:
// Choose a type based on the range of values your program needs,
// not just on the size you expect it to have.