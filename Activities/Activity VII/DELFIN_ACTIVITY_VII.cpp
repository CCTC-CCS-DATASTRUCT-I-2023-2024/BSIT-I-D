#include <iostream>

int main() {
   
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
      
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
        
    cout << "The sum of all whole numbers from 1 to " << n << " is " << sum << "." << endl;
    
    return 0;
}