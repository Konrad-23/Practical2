#include <iostream>
#include "function-2-2.cpp"

int main() {
    int binary_digits1[] = {1, 0, 1};
    int number_of_digits1 = 3;
    std::cout << "Integer value of binary 101 is " << binary_to_int(binary_digits1, number_of_digits1) << std::endl;

    int binary_digits2[] = {1, 1, 1, 0, 1, 1, 1};
    int number_of_digits2 = 7;
    std::cout << "Integer value of binary 1110111 is " << binary_to_int(binary_digits2, number_of_digits2) << std::endl;

    int binary_digits3[] = {0};
    int number_of_digits3 = 1;
    std::cout << "Integer value of binary 0 is " << binary_to_int(binary_digits3, number_of_digits3) << std::endl;

    return 0;
}
