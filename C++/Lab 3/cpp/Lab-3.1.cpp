//  Title:  Integer Equality Exchange
//  By Paul Cummings
//  8 September 2015

//  A)  Yes.  The program always says "Hey, that's a coincidence!"  Because it is not evaluating if the integers are the same.
//      == is the symbol for equivalence, = is the symbol for assigning value.  Just needed to add another = to fix it.
//  B)  Tested the program vigorously.  It ran as expected.
//  C)  I modified the text to say that.
//  D)  Made the modifications so that it's and if/else.

#include <iostream>

using namespace std;

int main()
{
    int num1; // num1 is not initialized

    int num2 = 5; // num2 has been initialized to 5

    cout << "Please enter an integer" << endl;

    cin >> num1;

    cout << "Please enter a second integer" << endl;

    cin >> num2;

    cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

    if (num1 == num2)
    {
        cout << "The values are the same.  Hey, that's a coincidence!" << endl;
    }

    else
    cout << "The values are not the same" << endl;

    return 0;
}
