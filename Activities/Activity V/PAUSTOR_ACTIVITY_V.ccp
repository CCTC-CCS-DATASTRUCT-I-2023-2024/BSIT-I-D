#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter your Age: ";
    cin >> age;

    if (age >= 0 && age <= 4)
    {
        cout << "For you" << endl;
    }
    else if (age >= 6 && age <= 10)
    {
        cout << "Yieeee" << endl;
    }
    else
        cout << "Only you" << endl;
}
