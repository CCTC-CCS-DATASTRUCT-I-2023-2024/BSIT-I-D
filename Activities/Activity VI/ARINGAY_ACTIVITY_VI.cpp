#include <iostream>
using namespace std;

int main (){
    string st;
    double amount;
    cout<<"Do you want to start the transaction? (yes/no)?"<<endl;
        cin>>st;
    cout<<"Enter amount: "<<endl;
    cin>>amount;

    do {
        cout<<"Start again? +50"<<endl;
        cin>>st;
        if (st=="yes") {
            amount +=50;
          
        }else{
            cout<<"The total amount is : "<<amount<<endl;
        }

    }while (st!="no");
}
