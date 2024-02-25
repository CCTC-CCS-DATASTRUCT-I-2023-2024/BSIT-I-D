#include <iostream>
using namespace std;

int main(){
        int num1;
        int num2;

        cout << "Enter Values: ";
        cin >> num1;

        cout <<"Enter Values: ";
        cin >> num2;

        int sum = num1 + num2;
        int Prod = num1 * num2;
        int Qou = num1 - num2;
        int Diff = num1 / num2;

        cout <<"Sum is: " << sum << endl;
        cout <<"Product is: " << Prod << endl;
        cout <<"Qoutient is: " << Qou << endl;
        cout <<"Difference is: " << Diff << endl;


}