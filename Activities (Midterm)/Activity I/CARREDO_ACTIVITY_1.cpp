#include <iostream>
using namespace std;

int main() {
    string names[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter name " << (i + 1) << ": ";
        cin >> (names[i]);
    }

    cout << "Enter the number of the name you would like to select (1-5): ";

    int num;
    cin >> num;
     
    if (num >= 1 && num<= 5) {
        cout << "Selected name: " << names[num - 1] << endl;
    } else {
        cout << "Sorry, your selection is invalid . Please try again." << endl;
    }

}