#include <iostream>
using namespace std;

int main(){

  int scores[10];
 
for(int i=0; i<10; i++){
  cout << "Enter score" << (i + 1) + " :";
  cin >> scores[i];
}

int sum =0;
for( int x : scores){
  sum = sum + x;
}
  
 double average = (double) sum / 10;
 cout << "Average : " << average;
}


