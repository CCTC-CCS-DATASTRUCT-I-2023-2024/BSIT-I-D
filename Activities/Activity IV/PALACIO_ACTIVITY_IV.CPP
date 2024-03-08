#include <iostream>

int main() {
   
    int choice;
    cout << "Please enter your coffee choice (1 for Espresso, 2 for Americano, 3 for Cappuccino, 4 for Latte): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Espresso" << endl;
            break;
        case 2:
            cout << "Americano" << endl;
            break;
        case 3:
            cout << "Cappuccino" << endl;
            break;
        case 4:
            cout << "Latte" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
     }        
 }