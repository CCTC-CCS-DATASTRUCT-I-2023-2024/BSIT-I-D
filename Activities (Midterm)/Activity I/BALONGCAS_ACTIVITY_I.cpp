#include <iostream>

using namespace std;

int main(){
    string names[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter name " << (i + 1) << ": ";
        cin >> names[i];
    }
        cout << "Enter number: ";
        int position;
        cin >> position;
        if (position >= 1 && position <= 5) {
            cout << names[position - 1];
        }
        else{
            cout << "ERROR";
        
    }
}