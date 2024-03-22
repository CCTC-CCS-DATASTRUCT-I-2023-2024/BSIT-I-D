#include <iostream>
using namespace std;

int main(){
   double arr[10] = {1,2,3,4,5,6,7,8,9,10};

   for (int x = 0; x < 10; x++){
      cout<<"Enter score: " << (x+1) << " : ";
      cin >> arr[x];
   }
   double sum = 0;
   for (double x : arr){
      sum += x;
   }
   double average = sum / 10;
   cout << " Average: " << average;
   
}