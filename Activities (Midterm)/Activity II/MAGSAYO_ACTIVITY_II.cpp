#include <iostream>
#include <string>
using namespace std;
int main()
{
        int scores [10];
        int sum = 0;

        for (int i = 0; i < 10; i++) {
            cout<< "Enter score " << (i + 1) << ": ";
            cin >> scores[i];
            sum += scores[i];
        }

        double average = (double) sum / 10;
        cout<< "Average score: " << average;
    }
