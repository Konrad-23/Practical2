#include <iostream>
#include "function-1-1.cpp"

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    std::cout << "Sum of diagonal: " << sum_diagonal(matrix) << std::endl;
    return 0;
}
