#include <iostream>
using namespace std;

int main(){

    int kopi;

    cout << "Enter your choice of Coffee: ";
    cin >> kopi;

    switch(kopi){
        case 1:
            cout <<"Espresso" << endl;
            break;
        case 2:
            cout <<"Americano" << endl;
            break;
        case 3:
            cout <<"Cappuccino" << endl;
            break;
        case 4:
            cout <<"Latte" << endl;
            break;
    }
}