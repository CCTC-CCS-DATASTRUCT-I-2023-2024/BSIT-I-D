#include <iostream>
using namespace std;

int main (){

    int num[10];

    int sum = 0;
    
    for(int x = 0; x < 10; x++){
        cout << "Enter Score " << (x+1) << " : ";
        cin >> num[x];
    sum += num[x];
    }

    double average = (double) sum / 10;

    cout << "Average score is: " << average;
}