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
        cout << "Negra" << endl;
        break;

    case 2:
        cout << "Ita" << endl;
        break;

    case 3:
        cout << "Antique" << endl;
        break;

    case 4:
        cout << "Japanese" << endl;
        break;

    default:
        cout << "enter your type ><" << endl;
        break;
    }
}