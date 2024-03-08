#include <iostream>
#include <string>

using namespace std;

int main()
{
  string names[5];
  for(int i= 0;i<5; i++){
cout<<"Enter name" << (i+1) << ":" ;
cin >>names[i];

  }
cout<<"Enter Number from (1-5)";
int number;
    cin>>number;
    if(number >= 1 && number <=5){
        cout <<"name selected" << names [number -1] <<endl;
   }else {
    cout <<"Invalid"<<endl;

    }
}
