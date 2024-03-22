#include <iostream>
using namespace std;
         
         int main(){

         
        int scores [5][5];
  

     for(int i=0; i<5;i++){
        cout << ("Enter scores: ") << (i+1) << ": "<< endl;
        cout << ("Enter your scores: ") << (i+1) << ": ";
        for(int k= 0; k<5; k++){ 
            cin >> scores[i][k];
              
             }
           }
         double sum=0;
           for(int i=0; i<5;i++){
             for(int k= 0; k<5; k++){ 
                 sum+=scores[i][k];
        
           }
    
          }
            double average= sum/25 ;
              cout << "Average: "<< average << endl;
     }
