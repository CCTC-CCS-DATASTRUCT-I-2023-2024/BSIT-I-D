#include <iostream>

int main() {
   
    string startTransaction;
    double totalPrice = 0.0;
    double itemPrice;

    do {
        cout << "Do you want to start the transaction? (yes/no): ";
        cin >> startTransaction;

        if (startTransaction == "yes") {
            cout << "Enter the price of the item: ";
            cin >> itemPrice;
            totalPrice += itemPrice;
        }
    } while (startTransaction == "yes");

    cout << "Total price: " << totalPrice << endl;

    return 0;
}