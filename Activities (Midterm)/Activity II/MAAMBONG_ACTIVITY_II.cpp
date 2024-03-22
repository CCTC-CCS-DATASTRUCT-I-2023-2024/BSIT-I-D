#include <iostream>

using namespace std;
int main()
{

    double arr[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> arr[i];
    }
    double sum = 0;
    for (double basta : arr)
    {
        sum = sum + basta;
    }

    double average = sum / 10;
    cout << "Average score: " << average;
}