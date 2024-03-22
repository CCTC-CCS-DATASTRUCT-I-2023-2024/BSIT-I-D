#include <iostream>
using namspace std;

int main()
{
    std::vector<double> scores(10);

    std::cout << "Enter 10 scores:" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter score " << (i + 1) << ": ";
        std::cin >> scores[i];
    }

    double sum = 0;
    for (double score : scores)
    {
        sum += score;
    }
    double average = sum / 10;

    std::cout << "Average score: " << average << std::endl;

    return 0;
}