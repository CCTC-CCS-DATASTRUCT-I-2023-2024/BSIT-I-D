#include <iostream>

int main() {
    int num1, num2;
    
    std::cout << "input first integer: ";
    std::cin >> num1;
    std::cout << "input second integer: ";
    std::cin >> num2;
    
    int ans1 = num1 + num2;
    int ans2 = num1 - num2;
    int ans3 = num1 * num2;
    
    std::cout << "Sum = " << ans1 << std::endl;
    std::cout << "Difference = " << ans2 << std::endl;
    std::cout << "Product = " << ans3 << std::endl;
    
    return 0;
}