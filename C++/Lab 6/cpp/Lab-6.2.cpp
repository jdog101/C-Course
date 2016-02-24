//  Paul Cummings
//  11 October 2015
//  Lab6.2 Instructions

/*
2.	Complete the following program above by filling in the code described in the statements in bold so that it will perform the indicated task.

    // Done

a)	Run the program several times with various input. Record your results. Are they correct? What happens if you enter –1 first?
What happens if you enter only values of 0 for one or more months? Is there any numerical data that you should not enter?

    //The program is returning correct results.  When I enter -1 first (providing no rain data, by choosing to exit immediately),
    I receive the message "No data has been entered".  When I enter 0 for a month's rainfall, it adds nothing to the running total
    (as you would expect if there was no rainfall).  I tested several decimal values, all of which worked fine.  -1 exited the
    program and returned my results if I entered any rainfall data.  The only logical problem that occurred was when I entered a
    negative value other than -1.  Obviously I can't have negative rainfall, but the program still accepts negative results and
    subtracts that amount from the total.  This issue could be fixed with further user input validation.

b)	What is the purpose of the following code in the program above?
if (month == 1)
cout << "No data has been entered" << endl;

    //That if statement is catch a user entering -1 for the first month (i.e. choosing to exit without providing any data).  That is
    the only condition under which the month would be = to 1 and display this message.  No data was provided, the program has no
    rainfall values to give back, the only logical thing to provide is a message letting the user no that no data was entered.

*/

//Program
#include <iostream>
using namespace std;
int main()
{
// Fill in the code to define and initialize to 1 the variable month
int month(1);
float total = 0, rain;
cout << "Enter the total rainfall for month " << month << endl;
cout << "Enter -1 when you are finished" << endl;
// Fill in the code to read in the value for rain
cin >> rain;
// Fill in the code to start a while loop that iterates
// while rain does not equal -1

while (rain !=-1)
{
    // Fill in the code to update total by adding it to rain
    total += rain;
    // Fill in the code to increment month by one
    month++;
    cout << "Enter the total rainfall in inches for month " << month << endl;
    cout << "Enter -1 when you are finished" << endl;
    cin >> rain;
}
if (month == 1)
cout << "No data has been entered" << endl;
else
cout << "The total rainfall for the " << month-1 << " months is "<< total << " inches." << endl;
return 0;
}
