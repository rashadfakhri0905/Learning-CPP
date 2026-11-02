                       //Unreferenced parameters and unnamed parameters//

/*
-> In certain cases, you will encounter functions that have parameters that are not used in the body of the 
   function. These are called unreferenced parameters.
        example:

        void doSomething(int count) // warning: unreferenced parameter count
        {
         // This function used to do something with count but it is not used any longer
        }

        int main()
        {
            doSomething(4);

            return 0;
        }

->In a function definition, the name of a function parameter is optional. Therefore, in cases where a function parameter needs to exist but is not used in the body of the function, you can simply omit the name. A parameter without a name is called an unnamed parameter:

example:

void doSomething(int) // ok: unnamed parameter will not generate warning
{
}


*/