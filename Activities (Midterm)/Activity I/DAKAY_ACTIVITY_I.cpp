#include <iostream>

using namespace std;

int main() {
    string names[5];

    cout << "Enter names:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter name " << (i + 1) << ": ";
        getline(cin >> ws, names[i]);
    }

    cout << "Select a number from the list: ";
    int position;
    cin >> position;

    if (position >= 1 && position <= 5) {
        cout << "You have selected: " << names[position - 1] << endl;
    } else {
        cout << "No Name!!!" << endl;
    }

    return 0;
}