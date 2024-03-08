#include <iostream>

using namespace std;

int main() {
    string names[5];

    for (int i =0; i < 5; i++) {
        cout << "Enter name " << (i+1)<< ":";
        getline(cin, names[i]);
    }
    cout << "Select a number from the list (1-5):";
    int num;
    cin >> num;

    if (num >= 1 && num <=5) {
        cout << "You have selected:" << names[num - 1] << endl;
    } else {
        cout << "Eat!" << endl;
    }
}