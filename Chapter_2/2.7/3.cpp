                             // Other types of forward declarations // 

/*
Forward declarations are most often used with functions. However, forward declarations can also be used with 
other identifiers in C++, such as variables and types. Variables and types have a different syntax for forward 
declaration, so we’ll cover these in future lessons.
*/

// Declarations vs. definitions //

/*
* **Declaration:** Tells compiler an identifier exists + its type.


int add(int x, int y); // declaration
int x;                 // declaration + definition


* **Definition:** Actually implements/creates the identifier.


int add(int x, int y) { // definition
    return x + y;
}

int x; // definition


* **All definitions are declarations**, but not all declarations are definitions.
* **Pure declaration:** Declaration without a definition.


int add(int, int); // pure declaration


* **Initialization:** Gives an object an initial value.


int x{2}; // definition + initialization

**Easy memory:**
**Declaration = “It exists.”**
**Definition = “Here it is.”**
*/