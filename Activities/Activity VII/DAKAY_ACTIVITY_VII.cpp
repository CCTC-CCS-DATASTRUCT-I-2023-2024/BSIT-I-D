#include <iostream>

int main() {
    long number, fact = 1;
    
    std::cout << "Enter Your Factorial Number: ";
    std::cin >> number;

    for (long i = 1; i <= number; i++) {
        fact *= i;
    }

    std::cout << fact << std::endl;

    return 0;
}