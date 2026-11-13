// 4.10 — Boolean Return Values and If Statements
//
// A function that returns bool can be used directly
// as the condition of an if statement.
//
// Example:
//
// bool isEqual(int x, int y)
// {
//     return x == y;
// }
//
// int main()
// {
//     int a { 10 };
//     int b { 10 };
//
//     if (isEqual(a, b))
//         std::cout << "Numbers are equal\n";
//     else
//         std::cout << "Numbers are not equal\n";
// }
//
// If isEqual() returns true:
//     The if statement executes.
//
// If isEqual() returns false:
//     The else statement executes.
//
// Best practice:
// Boolean-returning functions make conditions easier to read.