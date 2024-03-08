#include <iostream>
using namespace std;

int name()
{
    string names[5];

    for (int i = 0; i < 5; i++)
    {    
        cout << "Enter name" << (i + 1)<< ": ";
        cin >> names[i];
    }

    cout << "Enter the number of the list of names that you want to display";
    int position;
    cin >> position;

    if (position >= 1 && position <= arraysize)
    {
       cout << "You selected" << names[position - 1]<< "." << end1;
    }
    else
    {
       cout << "Invalid index" << end1;
    }
}            
