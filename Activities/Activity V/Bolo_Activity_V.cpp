#include <iostream>
using namespace std;

int main(){

    int age;
    cout <<"Enter your age: ";
    cin >> age;

    if(age >= 0 && age <=4){
        cout <<"Free" << endl;
    }else if(age >= 5 && age <=7){
        cout <<"Discounted" << endl;
    }else 
        cout <<"Normal" << endl;

}