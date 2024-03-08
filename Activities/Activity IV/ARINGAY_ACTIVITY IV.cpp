#include <iostream>

int main() {
   
    int choice;
    std::cout << "Please enter your coffee choice (1 for Espresso, 2 for Americano, 3 for Cappuccino, 4 for Latte): ";
    std::cin >> choice;

    switch(choice) {
        case 1:
            std::cout << "Espresso" << std::endl;
            break;
        case 2:
            std::cout << "Americano" << std::endl;
            break;
        case 3:
            std::cout << "Cappuccino" << std::endl;
            break;
        case 4:
            std::cout << "Latte" << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
     }        
 }