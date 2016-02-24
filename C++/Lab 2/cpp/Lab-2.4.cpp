// Title:  The Minted Tailor
// By Paul Cummings
// 8 September 2015

//  Input:  The original price and the discount percent.
//  Process:  Calculate the after discount price, calculate the tax amount, and the after discount after tax price.
//  Output:  Display the discounted price, tax amount, and price total in a meaningful way.

#include <iostream>

using namespace std;

int main()
{
    //  Declare variables
    const float TAX (.07);
    float discountPercent, originalPrice, beforeTax, afterTax;

    //  Procure user input
    cout << endl << "Please enter the item's cost $";
    cin >> originalPrice;
    cout << endl << "Please enter the item's discount: ";
    cin >> discountPercent;

    //  Process the data
    discountPercent = discountPercent * .01;
    discountPercent = originalPrice * discountPercent;
    beforeTax = originalPrice - discountPercent;
    afterTax = beforeTax * TAX;

    //  Output the data meaningfully and within the instructions parameters
    cout << endl << endl << "Cost of item after discount: $" << beforeTax;
    cout << endl << "Amount of tax is: $" << afterTax;
    cout << endl << "Final Price is: $" << beforeTax + afterTax;
    cout << endl << "-----------------------------------";
    cout << endl << "Thank you for shopping at the Minted Tailor!";
    cout << endl << endl;

    return 0;
}
