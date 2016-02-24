
/*	Program: FindSum.cpp
	Date: 1 Sept 2015
	Programmers: Paul Cummings and N/A
	Purpose:	This program prompts the user to enter 2 integers.
                It reads these integers, calculates the sum and
                prints the sum on the screen.
*/

#include<iostream>

using namespace std;

int main()
{
	// Declare all needed variables

	int firstNumber;
	int secondNumber;
	int theSum;

	// Get user input

	cout << "Enter the first number:";
	cin >> firstNumber;
	cout << "Enter the second number:";
	cin >> secondNumber;

	// Calculate the sum of the two numbers entered by the user

	theSum = firstNumber + secondNumber;

	// Display the sum

	cout << "The sum is: " << theSum;

	return 0;
}
