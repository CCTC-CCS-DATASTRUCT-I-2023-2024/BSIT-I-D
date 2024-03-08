#include <iostream>
using namespace std;

int main (){
int choices;
cout <<"Enter number for your coffe (1.Espresso 2.Americano 3.Cappucino 4.Latte)"<< endl;

cin >> choices;
switch (choices)
{
case 1: 
    cout << "Espresso";
    break;
case 2:
    cout << "Americano";
case 3:
    cout << "Cappucino";
case 4:
    cout << "Latte";
default:
    break;
}
}

			 

	        
