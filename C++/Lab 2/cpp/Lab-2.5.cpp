//  Title:
//  By Paul Cummings
//  8 September 2015

//  Input:  Need to gather the number of vacation days in integer form.
//  Process:  Use division and modulus to determine the vacation time in weeks and days.
//  Output:  Let the user know how many weeks and days they spent on vacation.

#include <iostream>

using namespace std;

int main()
{
    //  Declare the variables
    int vacationDays, weeks, days;

    //  Gather the vacation time
    cout << endl << "Please enter the number of days you spent on vacation: ";
    cin >> vacationDays;

    //  Process the information
    weeks = vacationDays / 7;
    days = vacationDays % 7;

    //  Provide meaningful output
    cout << endl << endl << "You spend " << vacationDays << " days on vacation.";
    cout << endl << "That's " << weeks << " week(s) and " << days << " day(s).";
    cout << endl << endl << "Hope you had fun!";

    return 0;
}
