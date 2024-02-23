#include <iostream>
using namespace std;

int main(){
    string st;
    double amount = 0.0;

    cout<<"do you want to start the transaction(yes/no)"<<endl;
    cin>>st;
    cout<<"Enter your amount: "<<endl;
    cin>>amount;


    do{

        cout<<"Start again?"<<endl;
        cin>>amount;
        if(st=="yes"){
            amount += 70;
        }else{
            cout<<"The total amount is: "<<amount<<endl;
        }
    }while(st=="no");



}