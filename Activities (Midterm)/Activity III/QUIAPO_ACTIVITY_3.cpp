#include <iostream>
using namespace std;

int main(){
   
   int scores[5][5];

   cout <<"Enter scores: ";

        for (int i = 0; i < 5; i++) {
            for (int k = 0; k < 5; k++) {
                cin >> scores[i][k];
            }
        }   

       int sum = 0;
       
        for (int i = 0; i < 5; i++) {
            for (int k= 0;k < 5; k++) {
                sum += scores[i][k];
                
            }
       } 
    double average = (double) sum / 25;
        cout << "Average: " << average;

}