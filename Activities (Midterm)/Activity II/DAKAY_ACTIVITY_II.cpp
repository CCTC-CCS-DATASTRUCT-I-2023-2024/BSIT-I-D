#include <iostream>
#include <vector>

int main() {
    std::vector<double> score(10);
    double average;
    double sum = 0;

    for (int i = 0; i < score.size(); i++) {
        std::cout << "Enter the score " << (i + 1) << ": ";
        std::cin >> score[i];
        sum += score[i];
    }

    average = sum / 10;
    std::cout << "Average: " << average << std::endl;

    return 0;
}