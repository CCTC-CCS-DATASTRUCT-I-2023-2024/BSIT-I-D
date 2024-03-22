#include <iostream>
using namespace std;

int main() {
    double scores[10];
    double sum = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Enter score " << (i + 1) << ": ";
        cin >> scores[i];
        sum += scores[i];
    }

    double average = sum / 10;

    cout << "Average score: " << average << endl;

  
}