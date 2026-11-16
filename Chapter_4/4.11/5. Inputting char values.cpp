// 4.11 — Inputting char Values
//
// std::cin can extract a single character into a char variable.
//
// Example:
//
// char ch {};
//
// std::cout << "Enter a character: ";
// std::cin >> ch;
//
// std::cout << "You entered: " << ch << '\n';
//
// If the user enters multiple characters, std::cin extracts
// only the first character.
//
// Example:
//
// Input: hello
// First extraction -> 'h'
//
// The remaining characters stay in the input buffer.
//
// If you want to store multiple characters, use std::string,
// which will be introduced in lesson 5.7.