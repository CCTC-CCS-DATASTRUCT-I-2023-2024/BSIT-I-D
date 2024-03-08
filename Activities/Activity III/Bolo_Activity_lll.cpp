#include <iostream>
using namespace std;

int main(){
    
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age>=17){
        cout << "Welcome" << endl;
    }else{
        cout << "Your not allowed" << endl;
    }
}