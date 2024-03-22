#include <iostream>
#include <string>
using namespace std;

int main () {
    int scores [10];
    int sum = 0;
    
    for(int x = 0; x<10; x++){
        cout<< "Enter Scores "<< (x + 1)<<":";
        cin>> scores[x];
        sum += scores[x];
        
    }
   
    double Average = (double) sum/10;
    cout<< "The average score: "<< Average;
    
}