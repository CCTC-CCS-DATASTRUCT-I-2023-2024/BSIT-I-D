#include <iostream>
using namespace std;


int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;

    if (age>=0 && age<=3) {
        cout<<"Free"<<endl;
    } else if (age>=4 && age<=6) {
        cout<<"Discounted"<<endl;
    } else if (age>=7) {
        cout<<"Normal"<<endl;
    } else {
        cout<<"Invalid age"<<endl;
    }


}