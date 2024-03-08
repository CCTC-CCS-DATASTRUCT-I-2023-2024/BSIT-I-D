#include <iostream>
using namespace std;

int main (){

    string names[5];

    for(int i = 0; i < 5; i++){
         cout << "Enter a name " << (i+1) << ": ";
         cin >> names[i];
    }
        
    cout << "Enter the number on the list of names you want to display: ";
    int num;
    cin >> num;

    if (num >= 1 && num <= 5){
         cout << "You have selected " << names[num - 1];
    }
    else{
        cout << "invalid index";
    }



}
