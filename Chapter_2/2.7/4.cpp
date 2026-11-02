                                     // One Definition Rule //

/* 
**ODR:** In C++, an identifier generally can have **only one definition** in a given scope.

1. **Within a file:** One definition per function/variable/type/template in a scope.
2. **Within a program:** One definition per function/variable in a scope.
3. **Exceptions:** Types, templates, `inline` functions/variables can have **identical definitions in multiple
    files**.

**Violations:**

* Part 1 → **Compiler error**
* Part 2 → **Linker error**
* Part 3 → **Undefined behavior**

### Example

*/
int add(int x, int y)
{
    return x + y;
}

int add(int x, int y) // ❌ ODR violation: defined twice
{
    return x + y;
}

int main()
{
    int x{};
    int x{5}; // ❌ ODR violation: x defined twice
}

/* ### Different scopes are OK


int add(int x, int y) // x is in add()'s scope
{
    return x + y;
}

int main()
{
    int x{}; // ✅ Different scope, so OK
}

**Remember:**

> **Same scope → one definition. Different scopes → separate definitions.**
*/