#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    unsigned seed = time(0);
    srand(seed);

    int num(0), x(0);

    for (x = 0; x < 10; x++)  //Will iterate 10 times
        {
            num = rand() % 100 + 1;
            cout << num << endl;
        }
    return 0;
}
