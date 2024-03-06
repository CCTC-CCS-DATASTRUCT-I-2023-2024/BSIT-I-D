#include <iostream>
using namespace std;

int main(){

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age <= 3 && age >=0){
       cout << "Free";
     }else if (age <= 6 && age >= 4){
        cout << "Discounted";
     }else{
       cout << "Normal";
     }

    return 0;
}