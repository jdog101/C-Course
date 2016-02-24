//  Title:  switch.cpp
//  By Paul Cummings
//  15 September 2015

//  A)  As soon as a case is met, the program will execute the code and the code of all cases following it.
//  B)  The instruction was ambiguous.  I added another switch for a grade of "E" as passing.
//  C)  Done.  Yes.  The else essentially replaced the 'default:' section of code in the switch.

#include <iostream>

using namespace std;

int main()
{
    char grade;

    cout << "What grade did you earn in Programming I ?" << endl;
    cin >> grade;

    if (grade == 'A')
    {
        cout << "an A - excellent work !" << endl;
    }

    else if (grade == 'B')
    {
        cout << "you got a B - good job" << endl;
    }

    else if (grade == 'C')
    {
        cout << "earning a C is satisfactory" << endl;
    }

    else if (grade == 'D')
    {
        cout << "while D is passing, there is a problem" << endl;
    }

    else if (grade == 'E')
    {
        cout << "I'm not sure why we're passing you with an E..." << endl;
    }

    else if (grade == 'F')
    {
        cout << "You failed - better luck next time" << endl;
    }

    else
    {
        cout << "You did not enter an A, B, C, D, E, or F" << endl;
    }

    return 0;
}
