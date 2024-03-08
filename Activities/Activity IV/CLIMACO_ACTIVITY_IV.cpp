#include <iostream>
using namespace std;

int main()
{

    int type;

    cout << "Enter your favorite food: ";
    cin >> type;

    switch (type)
    {
    case 1:
        cout << "Pizza" << endl;
        break;

    case 2:
        cout << "Sisig" << endl;
        break;

    case 3:
        cout << "Burger" << endl;
        break;

    case 4:
        cout << "Halo-Halo" << endl;
        break;

    default:
        cout << "Fudgey Bar" << endl;
        break;
    }
}