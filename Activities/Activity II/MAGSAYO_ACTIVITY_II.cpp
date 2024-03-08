#include <iostream>
using namespace std;

int main() {
    int fnum, snum, sum, diff, pro,quo;
    cout << "Enter your first number:";
    cin >> fnum;
    cout << "Enter your second number:";
    cin >> snum;
    sum = fnum + snum;
    diff = fnum - snum;
    pro = fnum * snum;
    quo = fnum / snum;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << pro << endl;
    cout << "Quotient: " << quo << endl;

    return 0;
}


