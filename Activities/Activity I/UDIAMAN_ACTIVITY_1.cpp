#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int y = 15;
    int z = 20;

    int sum = x + y + z;
    int diff = x - y - z;
    int product = x * y * z;
    int quotient = x / y / z;

    cout << "Sum " << sum << endl; 
    cout << "Prod " << product << endl;
    cout << "Diff " << diff << endl; 
    cout << "Quotient " << quotient << endl;
}