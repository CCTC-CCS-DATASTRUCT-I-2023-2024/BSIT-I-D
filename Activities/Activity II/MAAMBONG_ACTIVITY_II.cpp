#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout<<("Enter first num: ")<<endl;
    cin>>num1;
    cout<<("Enter second num: ")<<endl;
    cin>>num2;

    int sum = num1+num2;
    int diff = num1-num2;
    int prod = num1*num2;
    
    cout<<"Sum is "<<sum<<endl;
    cout<<"Difference is "<<diff<<endl;
    cout<<"Product is "<<prod<<endl;
}