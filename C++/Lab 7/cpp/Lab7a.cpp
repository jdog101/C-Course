#include <iostream>

using namespace std;

int main()
{
char goAgain;
int number = 0;
//initialize the variable used in the condition;

goAgain = 'y';
//this is the while loop header

while (goAgain == 'y')
    {
        cout << "Here I am in the loop, my variable counter has a value of: " << number << endl;
        number = number + 1;
        cout << "Do you want to loop again, enter y for yes: ";

        //this updates the condition. IMPORTANT
        cin >> goAgain;
    }

        cout << "You are done looping, bye! Here is how many times you repeated the loop: " << number << endl;

return 0;
}
