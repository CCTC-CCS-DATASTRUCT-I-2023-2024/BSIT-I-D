#include <iostream>
using namespace std;

int main(){
    int num;
    string names[5];
    for (int i = 0; i < 5; i++){
        cout<<"Enter name: "<<(i + 1)<<" : ";
        cin>>names[i];
    }
    cout<<"Enter a number: ";
    cin>>num;
    if(num >= 1 && num <= 5){
        cout<<"You selected a number: "<<names[num - 1]<<endl;
    }
    else{
        cout<<"Gwapo ka?";
    }
}
