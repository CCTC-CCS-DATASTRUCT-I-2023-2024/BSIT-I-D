#include <iostream>

using namespace std;

int main() {
    double scores [10];
     for(int s = 0; s < 10; s++){
            cout << "Enter Score " << (s + 1) << ": ";
            cin >> scores[s];

        }
         double sum = 0;
        for(double s: scores){
            sum += s;
        }
        double average =  sum / 10;
        cout << "Average Score: " << average;

}
