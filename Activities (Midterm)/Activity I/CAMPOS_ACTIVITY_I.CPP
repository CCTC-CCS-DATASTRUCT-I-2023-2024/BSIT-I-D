#include <iostream>
using namespace std;

int main (){
    int arraySize = 5;
    string names[arraySize];
     
    for (int i = 0; i < arraySize; i++){
        cout << "Enter name: " << (i + 1) << ": ";
        cin >> names [i];
    }
    
    cout << "enter the number on the list of names: ";
    int position;
    cin >> position;

    if (position >= 1 && position <= 5){
        cout << " SELECTED POSITION " << names [position - 1] << "." << endl;
    
    }else{
        cout << "ERROR" << endl;
    }

}

