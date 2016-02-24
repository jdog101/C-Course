#include <iostream>

using namespace std;

int main()
{
    double weights[7]{.10,.10,.10,.10,.20,.10,.30};
    double myScores[7];
    string labels[7] = {"Exam 1", "Exam 2", "Exam 3", "Final Exam", "Programming Assignment", "Other Activities", "Lab Test Grade"};


    int grade;
    for(int i=0;i<7;i++)
    {
        cout << "Enter your grade for " << labels[i] << ": " << endl;
        cin >> grade;
        myScores[i]=grade;
    }

    double final=0;
    for(int z=0; z<7; z++)
    {
        final += (weights[z] * myScores[z]);
    }
    cout <<"Your final grade is: " << final << endl;
}
