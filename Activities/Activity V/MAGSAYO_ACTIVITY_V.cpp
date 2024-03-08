#include <iostream>
using namespace std;
int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;
    if (age >= 0 && age <=3) {
        cout << "Free" << endl;
    } else if (age >= 4 && age <= 6) {
        cout << "Discounted" << endl;
    } else {
        cout << "Normal" << endl;
    }
    return 0;
}


