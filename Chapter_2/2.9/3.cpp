                             //Using namespace std (and why to avoid it)//

/*
-> Another way to access identifiers inside a namespace is to use a using-directive statement.

    #include <iostream>

    using namespace std; // this is a using-directive that allows us to access names in the std namespace with 
    no namespace prefix

    int main()
    {
        cout << "Hello world!";
        return 0;
    }

-> A using directive allows us to access the names in a namespace without using a namespace prefix.


*/

#include <iostream> // imports the declaration of std::cout into the global scope

using namespace std; // makes std::cout accessible as "cout"

int cout() // defines our own "cout" function in the global namespace
{
    return 5;
}

int main()
{
    // cout << "Hello, world!"; // Compile error!  Which cout do we want here?  The one in the std namespace
    // or the one we defined above?

    return 0;
}