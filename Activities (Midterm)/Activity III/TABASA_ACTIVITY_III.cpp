#include <iostream>
#include <string>
using namespace std;

int main (){
    
    int scores [5][5] ;
    int i,x;
    for(int i = 0; i<5; i++){
        for(int x = 0; x<5; x++){
            cout<< "Enter scores " <<(x+1)<< ":";
            cin >> scores [i][x];
        }
    }
    int sum = 0;
        for (int i = 0; i<5; i++){
            for(int x = 0; x<5; x++){
                sum+=scores[i][x];
            }
        }
        double average = (double) sum/(5*5);
        cout << "The average of all scores: "<< average << endl;
}
