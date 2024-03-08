#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter your Age: ";
    cin >> age;

    if (age >= 0 && age <= 4)
    {
        cout << "Hello World" << endl;
    }
    else if (age >= 6 && age <= 10)
    {
        cout << "Hello Cruel World" << endl;
    }
    else
        cout << "Goodbye Cruel world" << endl;
}