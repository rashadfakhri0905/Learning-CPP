// 4.9 — Boolean Return Values
//
// Functions can return bool values to communicate whether
// a particular condition is true or false.
//
// Such functions commonly begin with names like:
//
// isEqual()
// isEven()
// hasCommonDivisor()
//
// Example:
//
// bool isEqual(int x, int y)
// {
//     return x == y;
// }
//
// The expression x == y evaluates to:
// true  if x and y are equal
// false if x and y are different
//
// The function returns that Boolean result.
//
// Benefits:
// - Makes functions easier to understand.
// - Allows functions to communicate success or failure.
// - Helps separate checking logic from other program logic.
//
// Best practice:
// Use bool as the return type when a function answers
// a yes-or-no question.