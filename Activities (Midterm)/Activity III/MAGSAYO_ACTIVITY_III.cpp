#include <iostream>
#include <string>
using namespace std;
int main(){


        int scores[5][5];
        cout<<"Enter scores" << ":";
        for(int x = 0; x < 5; x++){
            for(int y = 0; y < 5 ; y++){
                cin >> scores[x][y];
            }
        }
        int sum = 0;
        for(int x = 0; x < 5; x++){
            for(int y = 0; y < 5; y++){ 
             sum += scores[x][y];
             
            }
        }
        cout << "Total:"<< sum<<endl;
        double average = (double) sum /(5*5);
        cout<< "Average: " << average<< endl;
    }
    


        