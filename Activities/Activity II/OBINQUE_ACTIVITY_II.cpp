#include <iostream>
using namespace std;


void performCalculations() {
    int num1, num2, sum;
    
    cout << "Enter your first value: ";
    cin >> num1;
    
    cout << "Enter your second value: ";
    cin >> num2;
    
    cout << "Sum of the two values is: ";
    sum = num1 + num2;
    cout << sum << endl;
}
    
int main() {
    performCalculations();
    
    
}
