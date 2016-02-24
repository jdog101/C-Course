//  Title:  GPA
//  By Paul Cummings
//  15 September 2015

//  A)  gpa !< 2.0
//  B)  Yes, but you should only do this if you ensure the user only enters 1, 2, 3, or 4.
//  C)  Making this switch will result in the following:  All students with a GPA equal to or higher than 2.0 will "graduate soon".
//      All seniors will "graduate soon" regardless of their GPA.  All non-seniors that score a GPA of less than 2.0 "need more schooling".
//      The new lines of code DO account for every possibility/combination.
//  D)  Yes, according to the original intention of this program.  The initial "if" statement handles all cases of graduating soon.
//      All other cases fall under the second condition.  "else" would suffice.

#include <iostream>

using namespace std;

int main()
{
    char year;

    float gpa;

    cout << "What year student are you ?" << endl;
    cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)" << endl << endl;
    cin >> year;

    cout << "Now enter your GPA" << endl;
    cin >> gpa;

    if (gpa >= 2.0 && year == '4')
        cout << "It is time to graduate soon" << endl;
    else if (year != '4' || gpa < 2.0)
        cout << "You need more schooling" << endl;

    return 0;
}
