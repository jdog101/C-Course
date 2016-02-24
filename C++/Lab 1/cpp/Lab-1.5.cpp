
/*
	Program: calculateDiscount.cpp
	Date: 1 Sept 2015
	Programmers: Paul Cummings and N/A
    Purpose:	This program prompts the user to enter the original price of the item and
                the percent discount. It calculates the new price and displays it on the screen.
*/

#include<iostream>

using namespace std;

int main()
{
	// Declare needed variables

	double originalPrice;
	double percentDiscount;
	double newPrice;

	// Accept values from the user

	cout << endl << "Enter the original price of the item you are buying:" << endl;
	cin >> originalPrice;
	cout << endl << "Enter discount percent:" << endl;
	cin >> percentDiscount;

	// Calculate the new price

	newPrice = originalPrice * (percentDiscount / 100);
	newPrice = originalPrice - newPrice;

	// Display the new price on the screen

	cout << endl << "The original price of $" << originalPrice << " has been reduced to: $" << newPrice << endl;

	return 0;
}
