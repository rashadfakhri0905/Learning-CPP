// 4.12 — When Should We Use static_cast?
//
// Use static_cast when you intentionally want to convert
// a value into another type.
//
// Common examples:
//
// 1. Converting int to double:
//
// int x { 5 };
// double y { static_cast<double>(x) };
//
// 2. Converting double to int:
//
// double price { 19.99 };
// int wholePrice { static_cast<int>(price) };
//
// 3. Converting between signed and unsigned types:
//
// int value { 10 };
// unsigned int result { static_cast<unsigned int>(value) };
//
// Important:
// static_cast does not guarantee that the conversion
// preserves the original value.
//
// It only makes the conversion explicit.
//
// Best practice:
// Use static_cast when the conversion is intentional
// and the resulting value is appropriate for your program.