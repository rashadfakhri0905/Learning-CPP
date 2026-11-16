// 4.11 — Extracting Whitespace Characters
//
// By default, std::cin >> skips leading whitespace.
//
// Whitespace includes:
// - Spaces
// - Tabs
// - Newlines
//
// Example:
//
// char ch {};
//
// std::cin >> ch;
//
// If the user enters:
// a b
//
// First extraction -> 'a'
// Second extraction -> 'b'
//
// The space is skipped automatically.
//
// To read whitespace characters, use std::cin.get().
//
// Example:
//
// char ch {};
//
// std::cin.get(ch);
//
// std::cin.get() does NOT skip leading whitespace.
//
// It can extract:
// - Letters
// - Spaces
// - Tabs
// - Newlines
//
// Remember:
// std::cin >> ch       -> skips leading whitespace
// std::cin.get(ch)     -> does not skip leading whitespace