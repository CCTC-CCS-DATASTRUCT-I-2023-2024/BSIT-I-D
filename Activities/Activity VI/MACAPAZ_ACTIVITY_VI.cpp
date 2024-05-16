#include <iostream>
using namespace std;

int main(){
    
    string Transaction;
    int total;
    
    cout <<"Do you want to start a transaction? (yes/no): ";
    cin >> Transaction;

    while(Transaction == "yes"){
        int price;

        cout <<"Enter the price of the product: ";
        cin >> price;

        total += price;

        cout <<"Do you want to add another item? (yes/no: )";
        cin >> Transaction;
    }
