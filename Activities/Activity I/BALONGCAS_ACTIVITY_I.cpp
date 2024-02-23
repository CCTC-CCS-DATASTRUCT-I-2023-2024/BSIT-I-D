#include <iostream>

using namespace std;

int main(){
        int x = 5;
        int y = 15;
        int z = 20;

        int addition = x+y+z;
        int subtarction = addition-z;
        int multiplication = addition*subtarction;
        int division = multiplication/addition;

        cout << "Sum= " << addition<<endl;
        cout <<"Diff= " << subtarction<<endl;
        cout << "Product= " << multiplication<<endl;
        cout <<"Quotient= " << division<<endl;
        
}
