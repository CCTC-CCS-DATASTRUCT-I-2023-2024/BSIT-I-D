#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter your Age: ";
    cin >> age;

    if (age >= 0 && age <= 4)
    {
        cout << "For me" << endl;
    }
    else if (age >= 6 && age <= 10)
    {
        cout << "I dont like you" << endl;
    }
    else
        cout << "Your master" << endl;
}