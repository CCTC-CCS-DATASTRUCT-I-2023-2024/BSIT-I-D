#include <iostream>

int main() {

    int num1 = 5;
    int num2 = 10;
    int num3 = 15;

    int sum = num1 + num2 + num3;
    int diff = num1 - num2 - num3;
    int product = num1 * num2 * num3;
    float quotient = (float)num1 / num2;

    std::cout << "Result of sum: " << sum << std::endl;
    std::cout << "Result of diff: " << diff << std::endl;
    std::cout << "Result of product: " << product << std::endl;
    std::cout << "Result of quotient: " << quotient << std::endl;

    return 0;
}