#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 10;
    int z = 15;

    int sum = x + y + z;
    int diff = x - y - z;
    int product = x * y * z;
    int quotient = x / y / z;

    cout << "Sum " << sum << endl; 
    cout << "Prod " << product << endl;
    cout << "Diff " << diff << endl; 
    cout << "Quotient " << quotient << endl;
}