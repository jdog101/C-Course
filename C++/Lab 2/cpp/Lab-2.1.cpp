//  Title:  Rectangle Dimensions
//  Created by Paul Cummings
//  8 September 2015

#include <iostream>

using namespace std;

int main()
{
    // Declare my LENGTH and WIDTH as constants
    const int LENGTH(8), WIDTH(3);
    // Declare two variables to store our answers
    int area, perimeter;

    // No user input is required so we jump straight to arithmatic logic and calculations
    area = LENGTH * WIDTH;
    perimeter = (LENGTH * 2) + (WIDTH * 2);

    // Final step, provide the output and verify its accuracy
    cout << endl << "The rectangle's area is = " << area << endl;
    cout << endl << "The rectangle's perimeter is = " << perimeter << endl;

    // After building and running my program, I have verified that my output is correct

    return 0;
}
