#include <iostream>
using namespace std;

int main(){
    
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 0 && age <=3) {
        cout << "Free";
    }
    else if (age >= 4 && age <=6) {
        cout << "Discounted";
    }
    else if (age >= 7) {
        cout << "Normal";
    }


}
