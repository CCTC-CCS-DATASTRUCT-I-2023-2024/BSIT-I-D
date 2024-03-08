#include <iostream>
using namespace std;

int main(){
    string names[5];

for(int i = 0; i < 5; i++){
    cout << "Enter a name: " << (i + 1) <<":";
    cin >> (names[i]);
   }


    cout << "You can only select a number from 1 to 5: ";

int number;
cin >> number;

if(number >= 1 && number <= 5){
    cout << "Select names:" << names[number - 1] << endl;

}else {
    cout << "Error, You can only use a number from 1 to 5" << endl;
    
    }


}