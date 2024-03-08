#include <iostream>

int main() {
    
    double num1, num2, result;
    
  
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
  
    result = num1 + num2; 
    result = result - num1; 
    result = result * num2; 
    
    
    cout << "Sum = " << result << endl;
    
    return 0;
}