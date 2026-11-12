// 4.8 — Outputting Floating Point Values
//
// By default, std::cout uses a precision of 6 significant digits
// when displaying floating point values.
//
// We can change this using std::setprecision().
//
// Required header:
// #include <iomanip>
//
// Example:
//
// std::cout << std::setprecision(10);
//
// This asks std::cout to display up to 10 significant digits.
//
// Important:
// setprecision() changes how a number is displayed.
// It does NOT increase the actual precision of the variable.
//
// Output manipulators are sticky:
// Once set, the precision setting remains active until changed.