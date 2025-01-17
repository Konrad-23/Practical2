#include <iostream>

void count_digits(int array[4][4]) {
    int counts[10] = {0}; // Initialize the counts of digits 0-9 to 0

    // Count the occurrences of each digit
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (array[i][j] >= 0 && array[i][j] <= 9) {
                counts[array[i][j]]++;
            }
        }
    }

    // Print the results
    for (int i = 0; i < 10; ++i) {
        std::cout << i << ":" << counts[i];
        if (i < 9) {
            std::cout << ";";
        }
    }
    std::cout << std::endl;
}
