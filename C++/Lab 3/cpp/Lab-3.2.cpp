//  Title:  The Pass/Fail Test
//  By Paul Cummings
//  8 September 2015

//  A)  The program functions as intended unless 60 is the input.  Then is says the user Passes and Fails.
//  B)  Done
//  C)  Done
//  D)  Originally, my else statement resulted in simply telling the user they failed, but I have sine
//      added user validation to let the user know that negative numbers are not valid input.

#include <iostream>

using namespace std;

int main()
{
float average; // holds the grade average cout << "Input your average:" << endl;

cout << endl << "Please enter you grade average:";
cin >> average;
cout << endl << endl;

if (average > 100)
{
    cout << "Invalid input.  Please ensure it is a value between 0 and 100.";
}

else if (average <= 100 && average >= 90)
{
    cout << "You have scored an A!  Congratulations!";
}

else if (average < 90 && average >= 80)
{
    cout << "You have scored a B!  Keep it up!";
}

else if (average < 80 && average >= 60)
{
    cout << "You pass.  Keep studying.";
}

else if (average < 60 && average >= 0)
{
    cout << "You fail.  Consider taking advantage of tutoring sessions.";
}

else
{
    cout << "You have entered a negative value.  Please enter a valid number" << endl;
    cout << "between 0 and 100.";
}

cout << endl << endl;

return 0;
}
