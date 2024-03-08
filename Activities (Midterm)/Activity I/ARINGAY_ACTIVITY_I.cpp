#include <iosstream>

using namespace std;

int main(){
    string names[5];
    cout << "Enter name";

    for (int i = 0; i < 5; i++){
    
        cout << "Enter name" << (i = ) << ".";
        cin >> names[1];
    }
    cout << "Select a number from the list " << endl;
    int position;
    cin >> position;

    if (position >= 1 && position <= 5){
    
    cout << "You have selected" names[position - 1] << endl;
    }else{
       cout << "ERROR";
    
    
    return 0;
    }
}

 