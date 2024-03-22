#include <iostream>
using namespace std;

int main(){

    int scores [5][5];

    int sum = 0;
    int num = 0;

    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            cout <<"Enter Scores: ";
            cin >> scores[x][y];
            sum += scores[x][y];
            num++;
        }
    }
    
    double average = (double) sum / num;

    cout <<"Average Score: " << average;
}   