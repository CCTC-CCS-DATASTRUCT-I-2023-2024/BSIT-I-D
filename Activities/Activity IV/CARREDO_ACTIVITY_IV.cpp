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
        cout << "Black" << endl;
        break;

    case 2:
        cout << "White" << endl;
        break;

    case 3:
        cout << "Asian" << endl;
        break;

    case 4:
        cout << "Japanese" << endl;
        break;

    default:
        cout << "enter your type ><" << endl;
        break;
    }
}
