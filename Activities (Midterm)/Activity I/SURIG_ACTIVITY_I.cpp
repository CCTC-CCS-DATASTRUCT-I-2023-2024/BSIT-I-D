#include <iostream>
using namespace std;

int main() {
    int arraySize = 5;
    string names[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cout << "Enter name " << (i + 1) << ": ";
        getline(cin, names[i]);
    }

    cout << "Enter the number on the list of names you want to display: ";
    int position;
    cin >> position;

    if (position >= 1 && position <= arraySize) {
        cout << "You have selected " << names[position - 1] << "." << endl;
    } else {
        cout << "Invalid index" << endl;
    }

   
}