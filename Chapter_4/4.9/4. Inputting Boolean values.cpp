// 4.9 — Inputting Boolean Values
//
// By default, std::cin expects numeric input for bool.
//
// 0 -> false
// 1 -> true
//
// Other non-zero numeric values represent true, but values
// other than 0 and 1 cause std::cin to enter failure mode.
//
// If the user enters the word "true" without std::boolalpha,
// input fails and the bool is set to false.
//
// To accept the words true and false, use:
//
// std::cin >> std::boolalpha;
//
// Example:
//
// bool answer {};
//
// std::cout << "Enter true or false: ";
// std::cin >> std::boolalpha >> answer;
//
// Important:
// Input is case-sensitive.
// Only lowercase "true" and "false" are accepted.
//
// When boolalpha is enabled for input, numeric input such
// as 0 and 1 is no longer accepted.
//
// std::cin and std::cout have independent boolalpha settings.