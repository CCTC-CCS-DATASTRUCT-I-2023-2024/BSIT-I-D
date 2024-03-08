#include <iostream>

int main() {
   
    double num1, num2, result;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    result = num1 + num2; // Addition
    cout << "Sum = " << result << endl;
    
    result = num1 - num2; // Subtraction
    cout << "Difference = " << result << endl;
    
    result = num1 * num2; // Multiplication
    cout << "Product = " << result << endl;

    return 0;
}