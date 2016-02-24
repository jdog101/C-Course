//  Paul Cummings
//  12 October 2015
//  Lab6.4 Instructions

/*
4.	Note that the inner loop of the following program is always executed exactly three times—once for each day of the long weekend.
        Modify the code so that the inner loop iterates n times, where n is a positive integer input by the user. In other words,
        let the user decide how many days to consider just as they choose how many students to consider.

    //  Declared the variable int codeDays for the user determined loop length.  Replaced the loop condition to 'codeDays'.  Also needed
        to change the final calculation of 'average = total / 3;' to 'average = total / codeDays;'

a)	Modify the program so that it also finds the average number of hours per day that a given student studies biology as well as programming.
        For each given student include two prompts, one for each subject. Have the program print out which subject the student, on average,
        spent the most time on.

    //  First, I changed the instructions slightly to make more sense with two subjects being tackled.  Next I needed seperate variables for biology and coding.
        I made:  codeHours, codeTotal, codeAverage, bioHours, bioTotal, and bioAverage.  I kept the variable codeDays as it was because it could be used for
        both loops, regardless of its name.  I could've renamed it to something else, but day was already taken and I didn't want to hunt down and change any
        more variables than necissary.  Next I created a second loop for biology after the coding loop (nesting it within coding was not needed).  The last change
        I needed to make was to display the average hours for both and then determine which had more time studied in and display the result (I used if statements
        because it was quick and easy).

*/

#include <iostream>

using namespace std;

int main()
{
    int numStudents, codeDays(0);
    float codeHours, codeTotal, codeAverage, bioHours, bioTotal, bioAverage;
    int student, day = 0; // these are the counters for the loops
    cout << "This program will find the average number of hours a day" << endl;
    cout << "that a student spent programming over a long weekend\n\n";
    cout << "How many students are there ?" << endl << endl;
    cin >> numStudents;

    cout << endl << endl;
    cout << "Now please enter the number of days spent programming" << endl;
    cout << "over that weekend ?" << endl << endl;
    cin >> codeDays;

    for(student = 1; student <= numStudents; student++)
    {
        codeTotal = 0;
        for(day = 1; day <= codeDays; day++)
        {
            cout << "Please enter the number of hours coded by student "
            << student <<" on day " << day << "." << endl;
            cin >> codeHours;
            codeTotal = codeTotal + codeHours;
        }

        bioTotal = 0;
        for(day = 1; day <= codeDays; day++)
        {
            cout << "Please enter the number of hours the student" << student << endl;
            cout << " studied biology on day " << day << "." << endl;
            cin >> bioHours;
            bioTotal = bioTotal + bioHours;
        }

        codeAverage = codeTotal / codeDays;
        bioAverage = bioTotal / codeDays;

        cout << endl << "-------------------------" << endl;;
        cout << "The average number of hours per day spent programming by" << endl;
        cout << "student " << student << " is: " << codeAverage << " hour(s)" << endl << endl;

        cout << "The average number of hours per day spent studying biology" << endl;
        cout << "by student " << student << " is: " << bioAverage << " hour(s)" << endl << endl;

        cout << "Student " << student << " spent ";
        if (codeAverage > bioAverage)
        {
            cout << "on average, more time coding than studying biology!";
        }
        if (codeAverage < bioAverage)
        {
            cout << "on average, more time studying biology than coding!";
        }
        if (codeAverage == bioAverage)
        {
            cout << "on average, an equal amount of time studying biology as coding!";
        }
        cout << endl << "-------------------------" << endl << endl << endl;

    }

return 0;
}

