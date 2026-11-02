                             // Introduction to Literals and Operators //


//Literals 

/*
std::cout << "Hello world!";
int x { 5 };

-> What are ‘”Hello world!”‘ and ‘5’? They are literals. A literal (also known as a literal constant) is a fixed 
   value that has been inserted directly into the source code.

-> Literals and variables both have a value (and a type). Unlike a variable (whose value can be set and 
   changed through initialization and assignment respectively), the value of a literal is fixed and cannot be 
   changed. 

*/

// Operators 

/*

-> In mathematics, an operation is a process involving zero or more input values (called operands) that 
   produces a new value (called an output value). The specific operation to be performed is denoted by a symbol
   called an operator.

-> In C++, operations work as you’d expect. For example:

   #include <iostream>

    int main()
    {
        std::cout << 1 + 2 << '\n';

        return 0;
    }

    -> In this program, the literals 1 and 2 are operands to the plus (+) operator, which produces the output 
       value 3. This output value is then printed to the console. In C++, the output value of an operation is 
       often called a return value.

-> The number of operands that an operator takes as input is called the operator’s 'arity'.

-> Operators in C++ come in four different arities:
    ->Unary operators act on one operand. An example of a unary operator is the - operator. 
      For example, given -5, operator- takes literal operand 5 and flips its sign to produce new output value -5. 
    ->Binary operators act on two operands (often called left and right, as the left operand appears on the 
      left side of the operator, and the right operand appears on the right side of the operator).

    ->Ternary operators act on three operands. There is only one of these in C++ (the conditional operator), 
      which we’ll cover later.

    ->Nullary operators act on zero operands. There is also only one of these in C++ (the throw operator), 
      which we’ll also cover later.

-> Chaining Operators:
    ->PEMDAS = “Please Excuse My Dear Aunt Sally”.

-> Return values and side effects
    ->Most operators in C++ just use their operands to calculate a return value
    ->There are a few operators that do not produce return values (such as delete and throw)
    ->An operator (or function) that has some observable effect beyond producing a return value is said to have 
      a side effect.
    
*/