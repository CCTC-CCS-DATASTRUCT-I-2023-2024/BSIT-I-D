#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    string names[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name  " << (i + 1) << " : ";
        cin >> names[i];
    }
    cout << "Enter a number: ";
    cin >> num;

    if (num >= 1 && num <= 5)
    {
        cout << "You have selected: " << names[num - 1];
    }
    else
    {
        cout << "Invalid";
    }
}