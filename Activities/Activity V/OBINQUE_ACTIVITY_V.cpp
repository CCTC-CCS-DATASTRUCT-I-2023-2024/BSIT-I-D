#include <iostream>

using namespace std;

int main() {
    int age;

    cout << "Please enter your age: ";
    cin >> age;

    if (age > 4 || age > 6) {
        cout << "Normal ticket\n";
    } else if (age == 0 || age == 1 || age == 2 || age == 3) {
        cout << "Free ticket\n";
    } else {
        cout << "DiscOUNTED ticket\n";
    }

    
}
