// 4.10 — Chaining If Statements
//
// We can check multiple conditions using else if.
//
// Syntax:
//
// if (condition1)
//     statement1;
// else if (condition2)
//     statement2;
// else if (condition3)
//     statement3;
// else
//     default_statement;
//
// The conditions are checked from top to bottom.
//
// Once a condition evaluates to true:
//     Its associated statement executes.
//     The remaining conditions are skipped.
//
// Example:
//
// int number { -5 };
//
// if (number > 0)
//     std::cout << "Positive\n";
// else if (number < 0)
//     std::cout << "Negative\n";
// else
//     std::cout << "Zero\n";
//
// Output:
// Negative
//
// The final else is optional.
// It executes when all previous conditions are false.