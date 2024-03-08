#include <iostream>
using namespace std;

int main(){
    int arraySize = 5;
    String name[arraySize];

    for (int i = 0; i < arraySize; i++){
         cout <<"Enter name"<< (i = 1) << ":";
         cin >> names [i];
    }

    cout <<"Enter the number of the list of names you want to display: ";
    int position;
    cin >> position;

    if (posision >= 1 && posision <=arraySize){
        cout << "You have selected" << names [position - 1] << "." endl;
    
    }else{
         cout << " ERROR " << endl;
    }

}

