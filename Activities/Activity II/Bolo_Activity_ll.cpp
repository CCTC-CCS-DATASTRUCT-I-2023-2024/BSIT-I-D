#include <iostream>
using namespace std;

int main(){
    
    int num1;
    int num2;

    cout << "Enter a Values: ";
    cin >> num1;

    cout << "Enter a Value 2: ";
    cin >> num2;

    int prod = num1 * num2;
    int qout = num1 / num2;
    int sum = num1 + num2;
    int diff = num1 - num2;

    cout << "The prod is :" << prod << endl;
    cout << "The qout is :" << qout << endl;
    cout << "The sum is : " << sum << endl;
    cout << "The diff is :" << diff << endl;
 

}