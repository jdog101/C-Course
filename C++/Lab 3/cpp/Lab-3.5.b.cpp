//  Title:  T-Shirt Shopping!
//  By Paul Cummings
//  15 September 2015

#include <iostream>

using namespace std;

int main()
{
    int shirts;
    float discount, totalSale;

    cout << endl << "Please enter the number of shirts you wish to buy:";
    cin >> shirts;

    while (shirts < 0)
    {
        cout << endl << endl << "You must enter a positive number of shirts!";
        cout << endl << "Please re-enter the number of shirts you wish to buy:";
        cin >> shirts;
    }

    if (shirts >= 31)
    {
        discount = .25;
    }

    else if (shirts < 31 && shirts >= 21)
    {
        discount = .2;
    }

    else if (shirts < 21 && shirts >= 11)
    {
        discount = .15;
    }

    else if (shirts < 11 && shirts >= 5)
    {
        discount = .1;
    }

    else
    {
        discount = 0;
    }

    totalSale = shirts * 12;
    discount = discount * totalSale;
    totalSale = totalSale - discount;

    cout << endl << endl << "The cost per shirt is $12, and your total cost after discounts";
    cout << endl << "(if applicable) is $" << totalSale << "!" << endl;

    return 0;
}
