                            //Function return values (value-returning functions)//


//Consider this program that we will try to break into multiple funtions


#include <iostream>

int main()
{
	// get a value from the user
	std::cout << "Enter an integer: ";
	int num{};
	std::cin >> num;

	// print the value doubled
	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
} 


// The following program doesn't work

/*
#include <iostream>

void getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
}

int main()
{
	getValueFromUser(); // Ask user for input

	int num{}; // How do we get the value from getValueFromUser() and use it to initialize this variable?

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}
*/


/*

When function getValueFromUser is called, the user is asked to enter an integer as expected. But the value they 
enter is lost when getValueFromUser terminates and control returns to main. Variable num never gets initialized 
with the value the user entered, and so the program always prints the answer 0.

*/

// Now Fixing this program with the help of what we learned from 2.1 cpp

/* #include <iostream>

int getValueFromUser() // this function now returns an integer value
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;     // return the value the user entered back to the caller
}

int main()
{
	int num { getValueFromUser() }; // initialize num with the return value of getValueFromUser()

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}
*/

