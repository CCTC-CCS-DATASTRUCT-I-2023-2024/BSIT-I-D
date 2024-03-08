#include <iostream>

int main() {

    int num1 = 10;
    int num2 = 15;
    int num3 = 20;

    
    int addition = num1 + num2 + num3;
    int subtraction = num1 - num2 - num3;
    int multiplication = num1 * num2 * num3;
    float division = (float)num1 / num2;

    std::cout << "Result of addition: " << addition << std::endl;
    std::cout << "Result of subtraction: " << subtraction << std::endl;
    std::cout << "Result of multiplication: " << multiplication << std::endl;
    std::cout << "Result of division: " << division << std::endl;

    return 0;
}
