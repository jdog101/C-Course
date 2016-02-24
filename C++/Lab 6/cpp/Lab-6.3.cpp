//  Paul Cummings
//  11 October 2015
//  Lab6.3 Instructions

/*
3.	Fill in the indicated code to complete the following program. Then compile and run the program several times with various inputs.
Try all the possible relevant cases and record your results.

    //For the most part, this program worked well and as expected (giving the correct value for selection times the number purchase
and exiting when choosing 'e' or 'E'.  However, there were a few interesting exceptions to this.  When asked to input a character
for a drink choice, you could enter a string instead, and the program will not tell you that it's an invalid input.  If any of the characters
in that string are a menu choice (i.e. if it contains a,b,c,d, or e) the program will go into an infinite loop and freak out... unless there
is only ONE menu value (a,b,c,d, or e) and that character is at the END of the string.  When that exception happens, it tests each character
in the string individually, classifying each letter as invalid, and then finally accepting the final character as a menu choice by prompting
a drink selection, or exiting if the last letter was an 'e'/'E'.  Another interesting way to get the program to run an infinite loop and freak
out is by choosing a valid drink selection and then entering a char or string for the number of drinks desired.  Barring those troublesome
cases, the program worked fine.

a)	What do you think will happen if you do not enter A, B, C, D or E? Try running the program and inputting another letter.

    //If it is a single character that is not 'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', or 'E' the program will simply tell the user that
    it is an invalid selection and then loop back around to give the user another chance at making a selection.  As far as entering several
    characters at once, I cover the different possible combinations in part a) above.

b)	Replace the line
if (validBeverage == true)
with the line
if (validBeverage)
and run the program again. Are there any differences in the execution of the program? Why or why not?


    //I commented out the == true bit.  The program functions exactly as before for a simply reason.  When a bool is set as the condition, the
    default condition to meet is true.  So my options are to ask:  if (validBeverage), if (validBeverage == true), if (validBeverage == 1), or ==
    to any positive integer as they are all considered true.  If I was testing a false condition, I WOULD need the == conditional to test it.
    It would look like one of these two (and only these two, as far as I'm aware):  if (validBeverage == false) or if (validBeverage == 0).

*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    // Fill in the code to define an integer variable called number,
    int number;
    // a floating point variable called cost,
    float cost;
    // and a character variable called beverage
    char beverage;

    bool validBeverage;
    cout << fixed << showpoint << setprecision(2);
    do
    {
        cout << endl << endl;
        cout << "Hot Beverage Menu" << endl << endl;
        cout << "A: Coffee $1.00" << endl;
        cout << "B: Tea $ .75" << endl;
        cout << "C: Hot Chocolate $1.25" << endl;
        cout << "D: Cappuccino $2.50" << endl << endl << endl;
        cout << "Enter the beverage A,B,C, or D you desire" << endl;
        cout << "Enter E to exit the program" << endl << endl;
        // Fill in the code to read in beverage
        cin >> beverage;

        switch(beverage)
        {
            case 'a':
            case 'A':
            case 'b':
            case 'B':
            case 'c':
            case 'C':
            case 'd':
            case 'D': validBeverage = true;
            break;
            default: validBeverage = false;
        }

        if (validBeverage/* == true*/)
        {
            cout << "How many cups would you like?" << endl;
            // Fill in the code to read in number
            cin >> number;
        }

        // Fill in the code to begin a switch statement
        // that is controlled by beverage
        switch (beverage)
        {
            case 'a':
            case 'A': cost = number * 1.0;
            cout << "The total cost is $ " << cost << endl;
            break;

            // Fill in the code to give the case for hot chocolate ($1.25 a cup)
            case 'c':
            case 'C': cost = number * 1.25;
            cout << "The total cost is $ " << cost << endl;
            break;

            // Fill in the code to give the case for tea ( $0.75 a cup
            case 'b':
            case 'B': cost = number * .75;
            cout << "The total cost is $ " << cost << endl;
            break;

            // Fill in the code to give the case for cappuccino ($2.50 a cup)
            case 'd':
            case 'D': cost = number *2.5;
            cout << "The total cost is $ " << cost << endl;
            break;

            case 'e':
            case 'E': cout << " Please come again" << endl;
            break;
            default:cout << "This is an invalid selection!";  // Fill in the code to write a message
            // indicating an invalid selection.
            cout << " Try again please" << endl;
        }
    } while (beverage != 'e' && beverage != 'E');  // Fill in the code to finish the do-while statement with the
    // condition that beverage does not equal E or e.

    // Fill in the appropriate return statement
    return 0;
}
