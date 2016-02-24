//  Paul Cummings
//  11 October 2015
//  Lab6.1 Instructions

/*
1.	Write the following and compile it.

a)	This program is not user friendly. Run it a few times and explain why:

    //  For starters, it’s missing #include <iostream> which prevents the program from using the cout statement.  Once fixed, the program lacks any structure or white space for easy reading of the code.  Next, when run, the program does not provide good instructions to the user.  The output is formatted poorly.  The user is stuck in an infinite loop unless they know to enter ‘x’ otherwise they are forced to alt+f4 the program.

b)	Add to the code so that the program is more user friendly:

    //  Done.

c)	How would this code affect the execution of the program if the while loop is replaced by a do-while loop? Try it and see:

    //  Done.  This change made NO difference in the functionality of this program because the value of letter is inputted and printed within the loop itself.
*/

#include <iostream>

using namespace std;

int main()
{
    char letter = 'a';

    cout << endl << "You will be asked to enter a letter.";
    cout << endl << "When you do, the program will repeat back";
    cout << endl << "what you entered." << endl;
    cout << endl << "Enter 'x' if you wish to exit";

    do
    {
        cout << endl << "Please enter a letter: ";
        cin >> letter;
        cout << endl << "The letter you entered is " << letter << endl;
        cout << "------------------------------" << endl;
    } while (letter != 'x');

    return 0;
}
