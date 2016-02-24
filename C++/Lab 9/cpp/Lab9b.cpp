#include <iostream>

using namespace std;

const int SIZE = 10;

//void populateArray(int*, int);
//void assignArrayTwo(int*, int*, int);

int main()
{
    int arrayOne[SIZE];
    int arrayTwo[SIZE];

   // populateArray(arrayOne, SIZE);
   // assignArrayTwo(arrayOne, arrayTwo, SIZE);

    int x(0), i(0);

    for (int i; i < SIZE; i++)
    {
        cout << "Please enter an array value for position " << i+1 << ": ";
        cin >> x;

        arrayOne[i] = x;
    }

    int y(9);
    x = 0;

    for (int x; x < SIZE; x++)
    {
        arrayTwo[y] = arrayOne[x];
        y--;
    }

    for (int x(0); x < SIZE; x++)
    {
        cout << endl;
        cout << arrayOne[x] << "\t\t" << arrayTwo[x];
    }

    return 0;
}
/*
void populateArray(int* arrayOne, int)
{
        int x(0), i(0);

    for (int i; i < SIZE; i++)
    {
        cout << "Please enter an array value for position " << i+1 << ": ";
        cin >> x;

        arrayOne[i] = x;
    }
}

void assignArrayTwo(int* arrayOne, int* arrayTwo, int SIZE)
{
    int x(0), y(9);

    for (int x; x < SIZE; x++)
    {
        arrayTwo[y] = arrayOne[x];
        y--;
    }
}
*/
