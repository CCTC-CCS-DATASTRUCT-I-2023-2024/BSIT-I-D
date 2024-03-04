#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter your number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "The Sum of all whole number from 1 to" << n << " is " << sum << endl;
}