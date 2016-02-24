//  Title:  Semester Costs
//  By Paul Cummings
//  15 September 2015

#include <iostream>

using namespace std;

int main()
{
    char residentialStatus, roomAndBoard;
    int tuition, housing, total;

    cout << endl << endl << "Welcome back to School!";
    cout << endl << "Will you be In-State or Out-of-State this semester?";
    cout << endl << "(I) In-State, (O) Out-of-State:";
    cin >> residentialStatus;

    cout << endl << endl << "Excellent!";
    cout << endl << "Will you be requiring room and board?";
    cout << endl << "(Y) Yes, (N) No:";
    cin >> roomAndBoard;

    switch (residentialStatus)
    {

        case 'I':
        {
            tuition = 3000;
            housing = 2500;
            break;
        }

        case 'O':
        {
            tuition = 4500;
            housing = 3500;
            break;
        }

    }

    switch (roomAndBoard)
    {

        case 'Y':
        {
            total = tuition + housing;
            break;
        }

        case 'N':
        {
            total = tuition;
            break;
        }

    }

    cout << endl << endl << "Your tuition total for this semester is $" << total << ".";
    cout << endl << "We look forward to seeing you when classes start!";

    return 0;
}
