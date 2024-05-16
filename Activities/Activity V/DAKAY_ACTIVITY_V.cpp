#include <iostream>

int main() {
    int age;
    std::cout << "Input Age: ";
    std::cin >> age;

    if (age >= 0 && age <= 11) {
        std::cout << "Child" << std::endl;
    } else if (age >= 12 && age <= 17) {
        std::cout << "Teen" << std::endl;
    } else if (age >= 18 && age <= 64) {
        std::cout << "Adult" << std::endl;
    }

    return 0;
}