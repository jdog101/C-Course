#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include "WSstockQuote/stockQuote.h"

using namespace std;

int main()
{
    string stockSym;
    int stockQuantity, stockTypes;
    double totalValue, runningTotal = 0;

    cout << endl << "Thank you for using our stock exchange!" << endl << endl;
    cout << "Here is a list of stock types you can enter:" << endl << endl;
    cout << "GOOG - Google" << endl;
    cout << "FB   - Face Book" << endl;
    cout << "IBM  - IBM" << endl;
    cout << "INTL - Intel" << endl;
    cout << "T    - T-Mobile" << endl;
    cout << "AT&T - AT&T" << endl;
    cout << "APL  - Apple" << endl << endl;

    cout << "How my types of stock do you have? ";
    cin >> stockTypes;
    cout << endl << endl;

    for (int x = 0; x < stockTypes; x++)
    {
        cout << "Enter a stock symbol: ";
        cin >> stockSym;
        cout << endl << endl;

        cout << "How many of these stocks do you have? ";
        cin >> stockQuantity;
        cout << endl << endl;

        totalValue = getQuote(stockSym);
        totalValue *= stockQuantity;
        runningTotal += totalValue;

        cout << "The total value of your " << stockSym << " stock(s) is $";
        cout << totalValue << "!" << endl << endl;
    }

    /*
    cout << "Enter your first kind of stock: ";
    cin >> stockSym;
    cout << endl << endl;

    cout << "How many of these stocks do you have? ";
    cin >> stockQuantity;
    cout << endl << endl;

    totalValue = getQuote(stockSym);
    totalValue *= stockQuantity;


    cout << "The total value of your " << stockSym << " stock(s) is $";
    cout << totalValue << "!" << endl;
    */
    cout << endl << "The total value for your portfolio is $" << runningTotal << "!" << endl << endl;
    cout << "Thank you for using our program!";
    //= getQuote("goog");
    /*
    GOOG - Google
    FB   - Face Book
    IBM  - IBM
    INTL - Intel
    T    - T-Mobile
    AT&T - AT&T
    APL  - Apple
    */

    return 0;
}
