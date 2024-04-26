#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter your number: ";
    cin >> num;

    long sum;

    for(int i = 1; i <= num; i++){
         sum += i;
    }         
     cout << "The sum of all whole numbers from 1 to " << num << " is " << sum << endl;
}