#include <iostream>

using namespace std;

int main(){
    /*Choose:
    1 for Espresso 
    2 for Americano
    3 for Capuccino
    4 for Latte*/

    int choice;
    cout<<"Enter your Choice: ";
    cin>>choice;

    switch (choice){
        case 1:
        cout<<"Espresso";
        break;
        case 2:
        cout<<"Americano";
        break;
        case 3:
        cout<<"Capuccino";
        break;
        case 4:
        cout<<"Latte";
        break;
    }

}