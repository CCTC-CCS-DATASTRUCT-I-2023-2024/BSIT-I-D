#include <iostream>
using namespace std;

int main(){
        cout << ("Enter score: ")<< endl;
        double score[10];
        double average;
        double sum=0;

        for(int i=0; i<10;i++){
            cout << ("Enter your score ");
            cin >> score [i];
            sum += score[i];

            
        }
        average=sum/10;
        cout << "Average: " << average << endl;
}