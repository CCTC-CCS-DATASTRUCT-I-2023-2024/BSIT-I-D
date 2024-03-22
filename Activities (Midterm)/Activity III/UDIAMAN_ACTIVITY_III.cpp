#include <iostream>
using namespace std;


int main()  {
    int scores [5][5];

        for(int i = 0; i<5; i++) {
            cout << "Enter scores for student " << (i+1) << ": " << endl;
            for(int k = 0; k<5;k++) {
            cout << "Enter score " << (k + 1) << ": ";
                cin >> scores[i][k];

            }
        }

        double sum=0;
            for(int i=0; i<5;i++){
                for(int k= 0; k<5; k++){
                    sum+=scores[i][k];



                }
            }
            double average= sum/25 ;
            cout << "Enter your scores: " << average << endl;

}