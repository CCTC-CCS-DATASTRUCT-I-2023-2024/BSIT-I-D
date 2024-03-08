#include <iostream>
using namespace std;

int main (){
    int coff;
    cout<<"Enter Coffee number: "<<endl;
    cin>>coff;
    switch(coff){
        case 1: 
        cout<<"Espresso"<<endl;
        break;
        case 2:
        cout<<"Americano"<<endl;
        break;
        case 3: 
        cout<<"Cappuccino"<<endl;
        break;
        case 4: 
        cout<<"Latte"<<endl;
        break;
        default :
        cout<<"Not available"<<endl;
    }
    
}