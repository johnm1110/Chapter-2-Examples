// calculator.cpp : A program that acceptsd input from the user to perform a mathematical operation ontwo integers
//

#include <iostream>
using namespace std;

int main()
{
	// set variables
	int operand1, operand2, answer;
	char operater;

	// get input from user
	cout << "Enter the first integer ";
	cin >> operand1;
	cout << "Enter the second integer ";
	cin >> operand2;
	cout << "Enter the mathematical operation ";
	cin >> operater;

	switch (operater)
	{
		case '+':
			answer = operand1 + operand2;
			break;
		case '-':
			answer = operand1 - operand2;
			break;
		case '*':
			answer = operand1 * operand2;
			break;
		case '/':
			if (operand2 == 0)
			{
				cout << "You tried to divide by zero";
				return 0;
	     	}
			else
			{
				answer = operand1 / operand2;

			}
			break;
		default:
			cout << "the mathematical operator you seletected is invalid.\n";
			return 0;
	}

	// display the results
	cout << operand1 << " " << operater << " " << operand2 << " = " << answer;
	return 0;

}


