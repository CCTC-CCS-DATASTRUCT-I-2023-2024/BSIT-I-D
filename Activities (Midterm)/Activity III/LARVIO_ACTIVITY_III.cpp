#include <iostream>
using namespace std;
         
         int main(){

         
        int scores [5][5];
  

     for(int x=0; x<5;x++){
        cout << ("Enter scores: ") << (x+1) << ": "<< endl;
        cout << ("Enter your scores: ") << (x+1) << ": ";
        for(int y= 0; y<5; y++){ 
            cin >> scores[x][y];
              
             }
           }
         double sum=0;
           for(int x=0; x<5;x++){
             for(int y= 0; y<5; y++){ 
                 sum+=scores[x][y];
        
           }
    
          }
            double average= sum/25 ;
              cout << "Average: "<< average << endl;
}