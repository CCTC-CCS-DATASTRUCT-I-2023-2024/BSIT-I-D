#include <iostream>

using namespace std;

int main (){
    
    int age;
    cout<<"Input your age: ";
    cin>>age;

    if (age >= 0 && age <=11){
        cout<<"Child";
    }else if (age >=12 && age <=17){
        cout<<"Teen";
    }else if (age >=18 && age <=64){
        cout<<"Adult";
    }else{
        count<<"Senior";
    }
}