#include <iostream>
using namespace std;

int main()
{
    string names[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter names " << (i + 1) << ":";
        cin >> names[i];
    }

    cout << "Enter the number (1-5): ";
    int Yournum;
    cin >> Yournum;

    if (Yournum >= 1 && Yournum <= 5)
    {

        cout << "You have selected: " << names[Yournum - 1] << endl;
    }
    else
    {
        cout << "Invalid Index" << endl;
    }
}