#include <iostream>
using namespace std;

int main()
{

    string Transaction;
    int total;

    cout << "Do you want to start a transaction? (yes/no): ";
    cin >> Transaction;

    while (Transaction == "yes")
    {
        int price;

        cout << "Enter the price: ";
        cin >> price;

        total += price;

        cout << "Do you want to continue? (yes/no: )";
        cin >> Transaction;
    }

    cout << "Total price: " << total;
