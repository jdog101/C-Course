#include <iostream>

using namespace std;

const int SIZE = 10;

int main()
{
int ray[10]{1,2,3,4,5,6,7,8,9,10};
int averageVal=0;
/*
for(int i=1; i<=10; i++)
    {
        cout << "Enter the value of " << i << " in the array." << endl;
        cin  >> ray[i-1];
    }
*/
    int x(0);

    for (int i(0); i < SIZE; i++)
    {
        x = -1;

        do{
        cout << "Please enter a grade (1-100) for Test # " << i+1 << ": ";
        cin >> x;

        if (x < 0 || x > 100)
        {
            cout << endl << "Invalid input!" << endl << endl;
        }
        }while (x < 0 || x > 100);
        averageVal+=x;
        ray[i] = x;
    }


for(int i=0; i<10; i++)
    {
        cout << ray[i] << "     " << endl;
    }
    double average=averageVal/SIZE;
    cout << "The average is: " << average << "." << endl;

    int lowest(0);

    lowest = ray[0];

    for (int i(1); i < SIZE; i++)
    {
        if (ray[i] < lowest)
        {
            lowest = ray[i];
        }
    }

    int highest;

    highest = ray[0];

    for (int i(1); i < 10; i++)
    {
        if (ray[i] > highest)
        {
            highest = ray[i];
        }
    }
    cout << endl << "Highest: " << highest << endl;
    cout << "Lowest: " << lowest << endl;

}
