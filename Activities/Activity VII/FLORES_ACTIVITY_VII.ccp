#include <iostream>

int main() {
    
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

  
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    cout << "The sum of all whole numbers from 1 to " << num << " is " << sum << "." << endl;

    return 0;
}