#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void xLoop(int);
void yLoop(int, int);

int main()
{
int x(0), y(0);

cout << endl << "\t\t  Welcome to my Multiplication Table!" << endl;
cout <<         "\t\t---------------------------------------" << endl << endl;
cout << "|*****|******|******|******|******|******|******|******|******|******|******|\n";
cout << "| 0   |  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   |  10  |\n";


for (x=1; x <= 10; x++)
{
    xLoop(x);

    for (y=1; y <= 10; y++)
    {
        yLoop(x, y);
    }
}

cout << "|*****|******|******|******|******|******|******|******|******|******|******|\n";
cout << endl;  //For good measure :P

return 0;
}

void xLoop(int x)
{
    cout << "|*****|******|******|******|******|******|******|******|******|******|******|\n";

    if (x == 1)
    {
        cout << "| 1   |  ";
    }

    else if (x == 2)
    {
        cout << "| 2   |  ";
    }

    else if (x == 3)
    {
        cout << "| 3   |  ";
    }

    else if (x == 4)
    {
        cout << "| 4   |  ";
    }

    else if (x == 5)
    {
        cout << "| 5   |  ";
    }

    else if (x == 6)
    {
        cout << "| 6   |  ";
    }

    else if (x == 7)
    {
        cout << "| 7   |  ";
    }

    else if (x == 8)
    {
        cout << "| 8   |  ";
    }

    else if (x == 9)
    {
        cout << "| 9   |  ";
    }

    else
    {
        cout << "| 10  |  ";
    }
}

void yLoop(int x, int y)
{
    int product(0);

        product = x * y;

        if (product < 10 && y != 10)
        {
            cout << product << "   |  ";
        }

        else if (product < 100 && y != 10)
        {
            cout << product << "  |  ";
        }

        else if (product < 100 && y == 10)
        {
            cout << product << "  |";
        }

        else
        {
            cout << product << " |";
        }

        if (y == 10)
        {
            cout << endl;
        }
}
