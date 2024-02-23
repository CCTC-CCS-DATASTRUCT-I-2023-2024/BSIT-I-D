#include <iostream>
using namespace std;

int main(){
    int choice;

    cout<<"Choose your coffee (1. Espresso, 2. Americano, 3. Cappucino, 4. Latte,)"<<endl;
    cin >> choice;

    switch (choice){
        case 1:
        cout<<"Espresso"<<endl;
        break;
        case 2:
        cout<<"Americano"<<endl;
        break;
        case 3:
        cout<<"Cappucino"<<endl;
        break;
        case 4:
        cout<<"Latte"<<endl;
        break;

        

    }


}