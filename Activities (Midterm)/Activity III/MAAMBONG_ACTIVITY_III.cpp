
#include <iostream>
using namespace std;

int main()
{
    int scores[5][5];
    cout << "Enter scores : ";

    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cin >> scores[x][y];
        }
    }

    double sum;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += scores[i][j];
        }
    }
    double average = sum / (5 * 5);
    cout << "The average of the scores you entered is : " << average;
}
