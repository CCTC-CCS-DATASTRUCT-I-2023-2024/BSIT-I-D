#include <iostream>
using namespace std;

int main(){

    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1*num2;  

    cout << "Sum = " << sum << endl;
    cout << "Difference = " << diff << endl;
    cout << "Product = " << prod << endl;

    return 0;
}