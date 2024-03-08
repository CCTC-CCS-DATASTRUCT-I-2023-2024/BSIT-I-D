#include <iostream>
using namespace std;

int main () {

    int num;
    int sum = 0;

    cout <<"Enter a non-negative integer: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        sum +=i;
    }

    cout << "The sum of all whole numbers from 1 to "<< num <<" is "<< sum <<"." << endl;

}