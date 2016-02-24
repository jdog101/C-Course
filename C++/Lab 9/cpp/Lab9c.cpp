#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int ray[15];
    int even=0;
    int odd=0;
    srand(time(NULL));
    for(int i=0; i<15; i++)
    {
        int x=1+(rand()%20);
        ray[i]=x;
        if(x%2==0)
            even++;
        else
            odd++;
        cout << ray[i] << " ";
    }
    cout << "\nEven: " << even << endl << "Odd: " << odd << endl;
}
