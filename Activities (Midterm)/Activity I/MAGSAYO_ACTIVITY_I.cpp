#include <iostream>
#include <string>

using namespace std;

int main() {
    string names[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter name " << (i + 1) << ": ";
     cin >> names[i];
    }
    cout << "Enter the number of the name you chosen: (1-5): ";

    int chosenNo;
    cin >> chosenNo;
    if (chosenNo >= 1 && chosenNo <= 5) {
        cout << "Chosen name: " << names[chosenNo - 1] << endl;
    } else {
        cout << "INVALID!! As I instructed, please choose a number from  1 to 5 only! WAG KANG BOBO!!." << endl;
    }

}
