//  Title:  Quarterly Water Bill
//  By Paul Cummings
//  15 September 2015

#include <iostream>

using namespace std;

int main()
{
    int qOne, qTwo, qThree, qFour, average;

    cout << endl << "Please input your water bill for quarter 1:";
    cin >> qOne;
    cout << endl << "Please input your water bill for quarter 2:";
    cin >> qTwo;
    cout << endl << "Please input your water bill for quarter 3:";
    cin >> qThree;
    cout << endl << "Please input your water bill for quarter 4:";
    cin >> qFour;

    average = (qOne + qTwo + qThree + qFour) / 4;

    cout << endl << endl << "Your average monthly bill is $" << average << ".  ";

    if (average > 75)
    {
        cout << "You are using excessive amounts of water.";
    }

    else if (average >= 25 && average <= 75)
    {
        cout << "You are using a typical amount of water.";
    }

    else
    {
        cout << "You are using a small amount of water." << endl << "Good job conserving!";
    }

    return 0;
}
