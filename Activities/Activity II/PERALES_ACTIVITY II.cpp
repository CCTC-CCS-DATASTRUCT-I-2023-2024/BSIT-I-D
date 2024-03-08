#include <iostream>

int main() {
   
    double num1, num2, result;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    result = num1 + num2; // Addition
    std::cout << "Sum = " << result << std::endl;
    
    result = num1 - num2; // Subtraction
    std::cout << "Difference = " << result << std::endl;
    
    result = num1 * num2; // Multiplication
    std::cout << "Product = " << result << std::endl;

    return 0;
}