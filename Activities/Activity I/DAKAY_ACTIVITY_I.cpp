#include <iostream>

int main() {
    int a = 1, b = 2, c = 3;
    int sum = a + b + c;
    int dif = a - b - c;
    int pro = a * b * c;
    int quo = a / b / c;

    std::cout << "Sum " << sum << std::endl;
    std::cout << "Difference " << dif << std::endl;
    std::cout << "Product " << pro << std::endl;
    std::cout << "Quotient " << quo << std::endl;

    return 0;
}