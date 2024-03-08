#include <iostream>
using namespace std;

int main(){
    
    string transaction;
    int total;
    
    cout <<"Do you want to start a transaction? (yes/no): ";
    cin >> transaction;

    while(transaction == "yes"){
        int price;

        cout <<"Enter your price of the product: ";
        cin >> price;

        total += price;

        cout <<"Do you want to add another item? (yes/no: )";
        cin >> transaction;
    }

        cout << "Total price: " << total ;

}