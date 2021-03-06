//  Paul Cummings
//  12 October 2015
//  Lab6.5 Instructions

/*
5.	In the following program comment on the marked line about what that statements does and also explain how the program operates.

    //  Done

a)	Modify the program so that it gets number n as input from the user and generates n number random numbers and prints them as output.

    //  This was the easy part as it simply involves implementing a loop.  The first part was more difficult as it required some
        research to learn the definitions and wrap my head around the concept :P

*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int n(0), x(0);

    time_t t;
	/* time_t is a data type and 't' is the variable being declared.  A time_t variable type is defined for storing system time values.
       Such values are returned from the <time.h> library.  This is declaring that type of variable, whereas the #include <time.h> statement
       earlier gave this program access to the time function (which we call in the next line). */

	time(&t);
	/* This calls the time.h function and passes it the variable t by reference, essentially assigning a value to t as the exact time
        compared to something (unsure what the standard is) and converting that into seconds I believe...  The bottom line is, t now has
        a data type and a value and can be passed by the srand argument in the next line of code to initialize the random number generator/seed. */

	srand((unsigned int) t);
	/* This calls for the function srand to initialize or random number generator, by using t ans an unsigned int variable, generated by the time.
        I also learned that this line of code and the line above it could be combined into one line.  It would look like this:
        srand((unsigned) time(&t));  A little more convenient, but that would undermine the purpose of me describing what each component of these
        functions are doing.  */

	cout << endl << "Please enter how many random numbers you would like: ";
	cin >> n;
	cout << endl << endl;

	for (x = 1; x <= n; x++)
    {
        cout << "Random number " << x << " is: " << rand() << endl;
    }

    cin.get();  //  Does not appear to be pausing the program before termination like it should...
                //  I tried it out inside the loop, but it paused after every random number.
                //  Not sure why it's not working out of the loop as a single pause would work better.

	return 0;
}
