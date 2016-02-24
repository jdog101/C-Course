#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x(0);
    double tip(0), price(0), tipTotal(0);

    cout << "This program will ask you for the total cost of your meal and" << endl;
    cout << "the percent you wish to tip.  The program will then calculate" << endl;
    cout << "how much money you need to leave for the tip.  You may run this" << endl;
    cout << "program multiple times to determine different tipping ammounts." << endl;
    cout << "Enter -1 for the price when you are ready to quit!" << endl << endl;

    while (price != -1)
    {
        cout << "What was the cost of your meal? $";
        cin >> price;
        cout << endl;

        if (price != -1)
        {
            cout << "What percent do you wish to tip? ";
            cin >> tip;
            cout << endl;

            tipTotal = (tip/100) * price;

            cout << "You should tip $" << setprecision (3) << tipTotal << " for this meal." << endl << endl;
        }
    }

    return 0;
}
