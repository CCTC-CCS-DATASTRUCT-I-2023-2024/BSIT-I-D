#include <iostream>

int main() {
    
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    if (age >= 16) {
        cout << "Welcome" << endl;
    } else {
        cout << "Not allowed" << endl;
    }

    return 0;
}