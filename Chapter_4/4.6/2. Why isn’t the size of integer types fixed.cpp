// 4.6 — Why Isn't the Size of Integer Types Fixed?
//
// C and C++ allow fundamental integer types to vary in size
// so implementations can choose types suitable for their
// target computer architecture.
//
// This flexibility can improve performance, but it means
// types such as int do not have identical sizes everywhere.
//
// Fixed-width integers provide an alternative when a specific
// integer width is required.