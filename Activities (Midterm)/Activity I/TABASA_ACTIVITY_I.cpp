#include <iostream>
#include <string>
using namespace std;

int main (){
    string names[5];

    for (int i = 0; i < 5; i++){
        cout << "Enter names: " << (i + 1)<< ":";
        cin >> names[i];
    }
    
    cout << "Enter your number (1-5): ";
    int Betnumber;
    cin >> Betnumber;

    if (Betnumber >= 1 && Betnumber <= 5) {
        cout << "Selected name: " << names[Betnumber - 1] << endl;
    }
    else {
        cout << "INVALID! please choose a number from (1 - 5)";
    }
}