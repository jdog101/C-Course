
/*	Program: DoubleInteger.cpp
	Date: 1 Sept 2015
	Programmers: Paul Cummings and N/A
	Purpose:	This program takes an integer as input, doubles the value,
                and then displays the new value.
*/

#include <iostream>

using namespace std;

int main()
{
int number;

float total;

cout << "Today is a great day for Lab";

cout << endl << "Let's start off by typing a number of your choice" << endl;

cin >> number;

total = number * 2;

cout << total << " is twice the number you typed" << endl;

return 0;

}
