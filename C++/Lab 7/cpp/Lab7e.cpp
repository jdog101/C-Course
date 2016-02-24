#include <iostream>

using namespace std;

int main()
{
    int students, tests, x(0), y(0);
    double testScore(0), totalTest(0), averageTest(0);

    cout << "How many tests did this class take? ";
    cin >> tests;
    cout << endl << endl;

    cout << "How many students attended this class? ";
    cin >> students;
    cout << endl << endl;

    for (x = 1; x <= students; x++)
    {
        totalTest = 0;
        averageTest = 0;
        for (y = 1; y <= tests; y++)
        {
            cout << "What did student " << x << " score for test #" << y << "?" << endl;
            cin >> testScore;
            totalTest += testScore;
        }
        averageTest = totalTest / tests;
        cout << "Student " << x << " scored an average test score of " << averageTest << "!" << endl << endl;
    }

    return 0;
}
