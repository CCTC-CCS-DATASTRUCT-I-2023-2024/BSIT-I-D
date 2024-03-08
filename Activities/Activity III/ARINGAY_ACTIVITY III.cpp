#include <iostream>

int main() {
    
    int age;
    std::cout << "Please enter your age: ";
    std::cin >> age;
    if (age >= 16) {
        std::cout << "Welcome" << std::endl;
    } else {
        std::cout << "Not allowed" << std::endl;
    }

    return 0;
}