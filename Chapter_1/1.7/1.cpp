// Identifier naming best practices

#include <iostream>

int main()
{

    int value; // conventional
    int Value; // unconventional (should start with lower case letter)
    int VALUE; // unconventional (should start with lower case letter and be in all lower case)
    int VaLuE; // unconventional (see your psychiatrist) ;)

    int my_variable_name;   // conventional (separated by underscores/snake_case)
    int my_function_name(); // conventional (separated by underscores/snake_case)

    int myVariableName;     // conventional (intercapped/camelCase)
    int myFunctionName();   // conventional (intercapped/camelCase)

    int MyVariableName;     // unconventional (should start with lower case letter)
    int MyFunctionName();   // unconventional (should start with lower case letter)

    return 0;
}

// Best practice
// When working in an existing program, use the conventions of that program (even if they don’t conform to modern best practices).
// Use modern best practices when you’re writing new programs.
// Names starting with _ are typically reserved for OS, library, and/or compiler use