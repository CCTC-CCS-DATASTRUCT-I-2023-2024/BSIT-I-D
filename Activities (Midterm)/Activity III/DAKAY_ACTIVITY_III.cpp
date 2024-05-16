#include <iostream>

int main() {
    int score[5][5];
    int sum = 0;
    int count = 0;

    std::cout << "Enter score: " << std::endl;
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            std::cout << "Enter score for ROW " << (x + 1) << " and COLUMN " << (y + 1) << ": ";
            std::cin >> score[x][y];
            sum += score[x][y];
            count++;
        }
    }

    int average = sum / count;
    std::cout << "The Average of the Scored: " << average << std::endl;

    return 0;
}