#include <iostream>

int main() {
    int x = 25, y = 50, z = 75;

    int sum = x + y + z;
    int diff = z - x - y;
    int prod = y * z * x;
    int quot = x / y; 

    cout << "Sum is " << sum << endl;
    cout << "Difference is " << diff << endl;
    cout << "Product  is " << prod << endl;
    cout << "Quotient is " << quot << endl;

    return 0;
}