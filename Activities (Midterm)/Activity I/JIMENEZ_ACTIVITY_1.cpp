    #include <iostream>
using namespace std;
int main(){
    string names[5];

    for(int i= 0; i < 5; i++){
        cout<<"Enter name " <<(i+1)<<":";
        cin >>(names[i]);
    }

    cout<<"Enter the name you wanted to select (1-5): ";

    int number;
    cin>> number;

    if(number>= 1 && number <= 5){
        cout<< "Selected name: " << names[number -1]<< endl;
    }else{
        cout<<" Error! Please try again"<< endl;
    }
}
