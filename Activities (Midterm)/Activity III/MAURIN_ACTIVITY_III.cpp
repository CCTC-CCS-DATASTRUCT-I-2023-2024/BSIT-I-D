#include <iostream>

using namespace std;

int main() {
    int scores [5][5];
    
    int sum = 0;
    int num = 0;

    cout << "Enter number" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Enter number: ";
            int scores;
            cin >> scores;
            sum += scores;
            num++;
        }
    }

    double average = (double) sum/ num;

    cout << "Average score is: " << average << endl;
}