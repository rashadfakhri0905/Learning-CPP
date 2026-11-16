// 4.11 — Escape Sequences
//
// Escape sequences represent special characters.
//
// They begin with a BACKSLASH (\), followed by
// another character or number.
//
// Common escape sequences:
//
// \n  -> Newline
// \t  -> Horizontal tab
// \a  -> Alert (such as a beep)
// \b  -> Backspace
// \r  -> Carriage return
// \f  -> Form feed
// \v  -> Vertical tab
// \'  -> Single quote
// \"  -> Double quote
// \\  -> Backslash
// \?  -> Question mark (usually unnecessary)
//
// Examples:
//
// std::cout << "Hello\nWorld";
//
// Output:
// Hello
// World
//
// std::cout << "Name:\tRashad";
//
// Output:
// Name:   Rashad
//
// Important:
// Escape sequences use a BACKSLASH (\),
// not a forward slash (/).