#include <iostream>

using namespace std;

int main() {
    int scores[5][5];
    int sum = 0;

    cout << "Enter Scores from 1-25:" << endl;


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
                cout <<"Enter scores: ";
            cin >> scores[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            sum += scores[i][j];
        }
    }

    double average = (double)sum/ 25;
    cout << "Average all Scores: " << average << endl;


}
