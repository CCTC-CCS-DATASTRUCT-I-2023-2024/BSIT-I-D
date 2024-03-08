#include <iostream>
#include <string>

int main() {
    string Transaction;
    int total;
    
   
    cout << "Start the transaction? (yes/no): ";
    cin >>Transaction;
    
   
    while (answer == "yes") {
        int price;
        cout << "Enter the price of the item: ";
        cin >> price;
        total += price;
        cout << "Continue the transaction? (yes/no): ";
        cin >> Transaction;
    }
    
    
    cout << "Total price: " << total;
    
    return 0;
}