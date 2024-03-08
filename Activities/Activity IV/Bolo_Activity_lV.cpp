#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter Your fav coffee: ";
    cin >> num;

    switch (num){

        case 1:
        cout << "Black Coffee" << endl;
        break;
        
        case 2:
        cout << "Flat White" << endl;
        break;

        case 3:
        cout << "Macchiato" << endl;
        break;

        case 4:
        cout << "mocha" << endl;
        break;
    }



}