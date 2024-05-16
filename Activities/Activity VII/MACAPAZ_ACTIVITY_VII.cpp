#include <iostream>

using namespace std;

int main(){
    
int num;
cout << "Enter your number" << endl;
cin >> num;

long sum =1;
 
for(int i=1;i<=num;i++){
     sum += i;
}
 cout << "The sum of all whole numbers from 1 to 10 " << num << " is " << sum << endl;
    
}    
