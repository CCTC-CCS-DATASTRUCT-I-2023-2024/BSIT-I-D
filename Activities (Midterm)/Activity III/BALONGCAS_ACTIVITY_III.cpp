#include <iostream>

using namespace std;

int main() {
     int scores [5][5];

        for(int i = 0; i < 5; i++) {
            cout << "Enter scores for student " << (i + 1) << ": " << endl;
            for(int j = 0; j < 5; j++) {
            cout << "Enter score " << (j + 1) << ": " ;
                cin >> scores[i][j];
            }
        }

        int sum = 0;
        for(int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                sum += scores[i][j];
            }
        }

        double average = (double) sum / (5 * 5);

       cout << "Average Score: " << average;
}
