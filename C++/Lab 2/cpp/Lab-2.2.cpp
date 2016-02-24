// Title:  CalculateTip.cpp
// By Paul Cummings
// 8 September 2015

//  Purpose:  This program asks the user for the price of a meal and the percent of tip to be left.
//  It then calculates the tip and displays the price of the meal, the amount of the tip and the total cost.


#include <iostream>

using namespace std;

int main()
{
    // This section declares all needed variables
    float mealPrice, tipPercent, tipAmount, totalCost;

    //cin is used to read input from the user into a variable
    //prompt the user for values for the input variables
    cout << "Enter the price of the meal you purchased: ";
    cin >> mealPrice;

    cout << "Enter the tip percent you wish to leave: ";
    cin >> tipPercent;

    //cout << "The amount of tip is: " << tipAmount;  I removed this line by making it a comment
    //  The line is premature and would be garbage output.

    //process - notice the use of the assignment operator- it works from right to left
    tipPercent = tipPercent * .01;  //move the decimal two places to the left
    tipAmount = mealPrice * tipPercent;  //calculate the amount of tip

    //print output to screen using cout
    cout << endl << "The meal price you entered: " << mealPrice << endl;
    cout << "The amount of tip: " << tipAmount << endl;

    totalCost = mealPrice + tipAmount;  // This line had to be bumped up before displaying the totalCost
    cout << "The total cost: $" << totalCost << endl;

    return 0;
}
