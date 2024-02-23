#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter your Age: ";
    cin >> age;

    if (age >= 21)
    {
        cout << "welcome" << endl;
    }
    else
    {
        cout << "back to home" << endl;
    }
}