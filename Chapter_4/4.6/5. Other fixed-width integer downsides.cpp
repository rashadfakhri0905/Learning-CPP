// 4.6 — Other Fixed-Width Integer Downsides
//
// Fixed-width integer types are not guaranteed to exist
// on every possible architecture.
//
// A specific type, such as std::int32_t, may be unavailable
// on a platform that cannot provide that exact width.
//
// A fixed-width type may also be less efficient than another
// type on a particular processor, although this depends
// on the platform and program.
//
// For most modern computers, fixed-width types are practical
// when a guaranteed range is important.