#include <iostream>

int main() {
    int temp;
    std::cout << "Input Temperature: ";
    std::cin >> temp;

    if (temp >= 100) {
        std::cout << "Boiling" << std::endl;
    } else {
        std::cout << "Not Boiling" << std::endl;
    }

    return 0;
}