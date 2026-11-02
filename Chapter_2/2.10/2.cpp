// #include //

// #include tells the preprocessor to include another file.

// What happens:
// 1. The preprocessor finds #include.
// 2. It replaces #include with the contents of the specified file.
// 3. The included contents are also preprocessed.
// 4. Any additional #include directives inside it are processed recursively.
// 5. The rest of the original file is then preprocessed.

// Example:
#include <iostream>

// The preprocessor effectively inserts the contents of <iostream>
// before the rest of your code is compiled.

// KEY IDEA:
// #include = "insert the contents of this file here"