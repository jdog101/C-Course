#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;
    int x(0), number(0), total(0);
    float average(0);

    inputFile.open("C:\\Users\\Goat Prime.Goat\\Desktop\\inputFile.txt");

    if (inputFile)
    {
        for (x = 1; x <= 10; x++)
        {
            inputFile >> number;
            total += number;
        }

        inputFile.close();
        average = total / 10;
        cout << endl << "The Total is: " << total << endl;
        cout << "The Average is: " << average << endl;

    }

    else
    {
        cout << endl << "Error.  Could not read file!" << endl;
    }

return 0;
}
