#include <iostream>
using namespace std;

int  main() {
    int scores[5][5];
    int sum = 0;
    int num = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++){
            scores[i][j] = 0;
        }
    }

    cout << "Enter scores from 1_25:";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++){
            cout << "Enter score fpr row" << i + 1 << "and column" << j + 1 << ": ";
            cin >> scores[i][j];
            sum += scores[i][j];
            num++;
        }
    }

    double average = sum / num;
    cout << "Average score:" << average;


}