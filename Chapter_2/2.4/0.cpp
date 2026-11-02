#include <iostream>

int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

void printDouble()
{
    int num{};
    std::cout << num << " doubled is: " << num * 2 << '\n';
}

int main()
{
	int num { getValueFromUser() };

	printDouble();

	return 0;
}
/*
->The program still doesn’t work correctly (it always prints “0 doubled is: 0”).
  The core of the problem here is that function printDouble doesn’t have a way to access the value the 
  user entered.

->We need some way to pass the value of variable num to function printDouble so that printDouble can use that
 value in the function body.

*/
