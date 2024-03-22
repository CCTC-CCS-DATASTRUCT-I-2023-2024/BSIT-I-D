#include <iostream>
using namespace std;

int main() {
    int scores[5][5];
    int sum = 0;
    
    cout << "Enter 25 scores" <<endl ;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
              cout << "Enter scores:" ;
            cin >> scores[i][j];
            sum += scores[i][j];
        }
    }
    
    double average = (double) (sum) / 25;
    cout << "Average of all scores: " << average << endl;
    
    return 0;
}
