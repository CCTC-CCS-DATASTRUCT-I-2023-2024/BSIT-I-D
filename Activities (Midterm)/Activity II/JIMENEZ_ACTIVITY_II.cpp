#include <iostream>

using namespace std;

int main() {
    int scores[10];
    int sum = 0;

    cout << "Enter The 10 Scores below: " << endl;


    for (int i = 0; i < 10; i++) {
        cout << "Enter Score " << (i + 1) << ": ";
        cin >> scores[i];
        sum += scores[i];
    }

    double average = (double)sum / 10;


    cout << "Your Average score is: " << average << endl;
}
