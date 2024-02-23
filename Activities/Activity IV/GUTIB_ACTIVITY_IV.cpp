#include <iostream>
using namespace std;

int main()
{

    int type;

    cout << "Enter your type: ";
    cin >> type;

    switch (type)
    {
    case 1:
        cout << "Koreana" << endl;
        break;

    case 2:
        cout << "Filipina" << endl;
        break;

    case 3:
        cout << "Americana" << endl;
        break;

    case 4:
        cout << "Halfhuman" << endl;
        break;

    default:
        cout << "Char you're my type ><" << endl;
        break;
    }
}