#include <iostream>

using namespace std;

int main()
{
    double valueOne, valueTwo;
    char choice;

    do
    {
        cout << endl;
        cout << "Please enter a number greater than 5: ";
        cin >> valueOne;
        cout << endl << endl;
    } while(valueOne <= 5);

    do
    {
        cout << "Please enter a number less than 0: ";
        cin >> valueTwo;
        cout << endl << endl;
    } while(valueTwo >= 0);

    do
    {
        cout << "Please choose from the following menu!" << endl;
        cout << "A. Option One!" << endl;
        cout << "B. Option Two!" << endl;
        cout << "C. Option Three!" << endl;
        cin >> choice;
    } while(choice != 'A' && choice != 'B' && choice != 'C');

    cout << "Thank you for playing." << endl;
    cout << "Your choices were:" << endl;
    cout << valueOne << endl;
    cout << valueTwo << endl;
    cout << choice << endl << endl;
    cout << "You know how to follow directions :P" << endl;

    return 0;
}
