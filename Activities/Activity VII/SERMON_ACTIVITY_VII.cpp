#include <iostream>
using namespace std;

int main (){
    long num;
    long sum;
    cout<<("Enter Factorial number : ");
    cin>>num;
    for (long i = 1; i<=num; i++){
        sum+=i;
        }
    cout<<"The sum of all whole numbers from 1 to "<<num<<" is "<<sum<<endl;
}