/*

### Summary: Why Use Functions in C++?

Functions are **small, self-contained pieces of code** that perform a specific task. You could put everything 
inside `main()`, but functions become very useful as programs get larger.

#### Main benefits of functions

1. **Organization** — Break a large program into smaller, easier-to-understand pieces.
2. **Reusability** — Write code once and call it multiple times instead of copying it.
3. **Testing** — Small, independent functions are easier to test and debug.
4. **Extensibility** — Change a function in one place, and the change applies everywhere it is used.
5. **Abstraction** — You only need to know a function's **name, inputs, and outputs**, not how it works internally.

### How to use functions effectively

A good function usually:

* Handles code that is **repeated**.
* Has clearly defined **inputs and outputs**.
* Performs **one specific task**.
* Should be split into smaller functions if it becomes too long or complicated. This is called **refactoring**.

### A common program structure

Many beginner programs have 3 tasks:

```text
1. Get input
2. Calculate something
3. Display the result
```

For very small programs, these can all be inside `main()`.

For larger programs, it's better to separate them:

```cpp
getInput();
calculate();
printResult();
```

**Important rule:** A function should generally **do one job**.

For example, a function that calculates a value should usually **return the value** rather than calculating *and* printing it. The caller can then decide what to do with the result.

### 🧠 Core idea to remember

> **Functions help you break a complicated program into small, reusable, testable pieces, with each function ideally doing one job.**


*/