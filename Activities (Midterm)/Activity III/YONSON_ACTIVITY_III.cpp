#include <iostream>
using namespace std;

int main(){
    int scores[5][5];

    cout << "Enter scores: ";

    for (int x=0; x<5; x++) {
        for (int y=0; y<5; y++) {
            cin >> scores[x][y];
        }
    }
    int sum = 0;
    for (int a=0; a<5; a++) {
        for (int b=0; b<5; b++) {
            sum += scores[a][b];
        }
    }

    double average = (double) sum / (5*5) ;
    cout << "Average: " << average;

    return 0;
}