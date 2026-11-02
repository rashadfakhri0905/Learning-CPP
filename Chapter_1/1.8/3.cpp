                                     // Basic Formatting //

/*

1. It’s fine to use either tabs or spaces for indentation (most IDEs have a setting where you can convert a tab press into 
the appropriate number of spaces)

2. There are two conventional styles for function braces.

int main() {
    // statements here
}

int main()
{
    // statements here
}
    
3. Each statement within curly braces should start one tab in from the opening brace of the function it belongs to. For example:

int main()
{
    std::cout << "Hello world!\n"; // tabbed in one tab (4 spaces)
    std::cout << "Nice to meet you.\n"; // tabbed in one tab (4 spaces)
}

4. Lines should not be too long. Typically, 80 characters has been the de facto standard for the maximum length a line should be.

int main()
{
    std::cout << "This is a really, really, really, really, really, really, really, "
        "really long line\n"; // one extra indentation for continuation line

    std::cout << "This is another really, really, really, really, really, really, really, "
                 "really long line\n"; // text aligned with the previous line for continuation line

    std::cout << "This one is short\n";
}

5. If a long line is split with an operator (eg. << or +), the operator should be placed at the beginning of the next line, not the end of the current line
   
   std::cout << 3 + 4
    + 5 + 6
    * 7 * 8;

This helps make it clearer that subsequent lines are continuations of the previous lines, and allows you to align the operators on the left, which makes for easier reading.

6. Use whitespace to make your code easier to read by aligning values or comments or adding spacing between blocks of code.

Harder to read:

cost = 57;
pricePerItem = 24;
value = 5;
numberOfItems = 17;

Easier to read: 

cost          = 57;
pricePerItem  = 24;
value         = 5;
numberOfItems = 17;


*/