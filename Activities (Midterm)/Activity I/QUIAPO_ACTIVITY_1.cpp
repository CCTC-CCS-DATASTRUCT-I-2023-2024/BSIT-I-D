#include <iostream>
#include <string>

using namespace std;

int main(){
    string names[5];

    for (int i =0; i < 5; i++) {
        cout << "Enter name " << (i+1)<< ":";
        getline(cin, names[i]);
    }
    cout << "Enter the number of the name you would like to select (1-5):";
    int selectedNumber;
    cin >> selectedNumber;
    cin.ignore();

    if (selectedNumber >= 1 && selectedNumber <=5) {
        cout << "Select name:" << names[selectedNumber - 1] << endl;
    } else {
        cout << "Pagtarong palihug." << endl;
    }

    return 0;
}