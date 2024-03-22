#include <iostream>
using namespace std;

int main() {
    int scores[5][5];
    int sum = 0;
    int num = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Enter scores: ";
            cin >> scores[i][j];
            sum += scores[i][j];
            num++;
        }
    }
    double average = sum / num;
    cout << "Average score: " << average << endl;
    return 0;
}

