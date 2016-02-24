// Title:  Road Trip
// By Paul Cummings
// 8 September 2015

//  Input:  milesDriven and gallonsUsed.  This will be user input for the process later.
//  Process:  mpg = milesDrove / gallonsUsed;  This process will calculate the miles/gallon.
//  Output:  Finally display the results derived from the process:  mpg

#include <iostream>

using namespace std;

int main()
{
    //  Declare my variables
    float milesDriven, gallonsUsed, mpg;

    //  Get user input
    cout << endl << "Please enter the number of miles you drove:";
    cin >> milesDriven;
    cout << endl << "Please enter the number of gallons you used:";
    cin >> gallonsUsed;

    //  Use the process to calculate
    mpg = milesDriven / gallonsUsed;

    //  Display the final output
    cout << endl << endl << "You drove " << milesDriven << " miles and used " << gallonsUsed << " gallons." << endl;
    cout << "So your mpg is " << mpg << " miles to the gallon." << endl;

    return 0;
}
