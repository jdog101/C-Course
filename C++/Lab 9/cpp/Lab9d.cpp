#include <iostream>

using namespace std;

const int SIZE = 10;

int main()
{
    int employeeIDs[SIZE];
    int employeeSales[SIZE];
    int lowestSales(0), highestSales(0), lowestID(0), highestID(0);
    double totalSales(0), averageSales(0);

    cout << endl;

    for (int x(0); x < SIZE; x++)
    {
        cout << "Please enter the ID # for employee " << x+1 << ":";
        cin >> employeeIDs[x];
        cout << endl;
        cout << "Please enter the sales for employee " << x+1 << ":";
        cin >> employeeSales[x];
        cout << endl;
    }

    cout << endl << endl;

    for (int x(0); x < SIZE; x++)
    {
        cout << employeeIDs[x] << "\t\t";
        cout << "$" << employeeSales[x] << "\n\n";
    }

    lowestSales = employeeSales[0];
    lowestID = 0;

    for (int l(0); l < SIZE; l++)
    {
        if (employeeSales[l] < lowestSales)
        {
            lowestSales = employeeSales[l];
            lowestID = l;
        }
    }

    highestSales = employeeSales[0];
    highestID = 0;

    for (int h(0); h < SIZE; h++)
    {
        if (employeeSales[h] > highestSales)
        {
            highestSales = employeeSales[h];
            highestID = h;
        }
    }

    cout << endl << endl;
    cout << "The employee with the lowest sales is ID#: " << employeeIDs[lowestID] << endl;
    cout << "His/Her sales were $" << lowestSales << endl << endl;

    cout << "The employee with the highest sales is ID#: " << employeeIDs[highestID] << endl;
    cout << "His/Her sales were $" << highestSales << endl << endl;

    int ID=0;
    cout << "Enter the ID you want to search for." << endl;
    cin >> ID;
    for(int z=0;z<SIZE;z++)
    {
        if(ID==employeeIDs[z])
        {
    cout << "The value of ID " << employeeIDs[z] << " is: $" << employeeSales[z] << endl;
    z+=56878;
        }
    if(z==(SIZE-1) && ID!=employeeIDs[z])
        cout << "The ID could not be found." << endl;\
    }

    for (int x(0); x<SIZE; x++)
    {
        totalSales += employeeSales[x];
    }

        averageSales = totalSales / SIZE;

        cout << endl << endl;
        cout << "The average employee sales value is $" << averageSales << endl << endl;

        cout << "Below Average" << endl;
        cout << "-------------" << endl << endl;

        for (int x(0); x < SIZE; x++)
        {
            if (employeeSales[x] < averageSales)
            {
                cout << employeeIDs[x] << "\t\t" << employeeSales[x] << endl;
            }
        }

        cout << endl;

        cout << "Average" << endl;
        cout << "-------" << endl << endl;

        for (int x(0); x < SIZE; x++)
        {
            if (employeeSales[x] == averageSales)
            {
                cout << employeeIDs[x] << "\t\t" << employeeSales[x] << endl;
            }
        }

        cout << endl;

        cout << "Above Average" << endl;
        cout << "-------------" << endl << endl;

        for (int x(0); x < SIZE; x++)
        {
            if (employeeSales[x] > averageSales)
            {
                cout << employeeIDs[x] << "\t\t" << employeeSales[x] << endl;
            }
        }

    return 0;
}
