#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if (age<=3 && age>=0){
        cout<<" Free Tickets "<<endl;
    }else if (age<=6 && age>=4){
        cout<<" Discounted Tickets "<<endl;
    }else {
        cout<<" Normal Tickets "<<endl;
    }
}