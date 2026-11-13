// 4.10 — If Statements and Early Returns
//
// An early return is a return statement that occurs
// before the last statement of a function.
//
// It immediately exits the function and returns control
// to the caller.
//
// Example:
//
// int getAbsoluteValue(int x)
// {
//     if (x < 0)
//         return -x;
//
//     return x;
// }
//
// If x is negative:
//     The function immediately returns -x.
//
// If x is zero or positive:
//     The early return is skipped and x is returned.
//
// Early returns can simplify functions by handling
// special cases before the main logic.
//
// Example:
//
// void printNumber(int x)
// {
//     if (x < 0)
//         return;
//
//     std::cout << x << '\n';
// }
//
// If x is negative, the function exits without printing.
//
// Best practice:
// Use early returns when they make a function simpler
// and easier to understand.