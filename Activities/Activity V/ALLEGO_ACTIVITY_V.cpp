#include <iostream>

using namespace std;

int main(){

  int age;
  cout<<"Enter your age: ";
  cin>>age;

  if( age<=3 && age>=0){
    cout<<" free";
    } else if ( age<=6 && age>=4 ){
    cout<<" discounted";   
    }else{
    cout<<" normal ";
    }
}


