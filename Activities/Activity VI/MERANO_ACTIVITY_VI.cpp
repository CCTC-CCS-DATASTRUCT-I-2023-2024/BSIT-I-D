#include <iostream>
using namespace std;

int main (){

    double price;
    double total;
    string answer;

    cout << "Do you want to start the transaction? (yes/no): ";
    cin >> answer;

     while (answer == "yes"){
       cout << "Enter the amount: ";
       cin >> price;
       total += price;


       cout << "do you want to continue? " << endl;
       cin >> answer;

       cout << "The total amount is: " << total << endl;

    }
}