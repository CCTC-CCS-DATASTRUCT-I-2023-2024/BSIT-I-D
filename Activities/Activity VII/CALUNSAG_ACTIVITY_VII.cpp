#include <iostream>
using namespace std;

int main (){
    long fac;
    long sum;
    cout<<("Enter Factorial number : ");
    cin>>fac;
    for (long i = 1; i<=fac; i++){
        sum+=i;
        
        
    }
    cout<<"The sum of all whole numbers from 1 to "<<fac<<" is "<<sum<<endl;
}