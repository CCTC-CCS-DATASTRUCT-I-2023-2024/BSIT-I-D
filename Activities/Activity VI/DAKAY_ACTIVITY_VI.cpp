#include <iostream>

int main() {
    int time;
    std::cout << "Input Time: ";
    std::cin >> time;

    while (time >= 0) {
        std::cout << time << std::endl;
        time--;
    }

    return 0;
}