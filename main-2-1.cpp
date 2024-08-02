#include <iostream>
#include "function-2-1.cpp"

int main() {
    std::string decimal_number;

    decimal_number = "1101";
    std::cout << "Binary of " << decimal_number << " is ";
    print_binary_str(decimal_number);

    decimal_number = "101";
    std::cout << "Binary of " << decimal_number << " is ";
    print_binary_str(decimal_number);

    decimal_number = "1110111";
    std::cout << "Binary of " << decimal_number << " is ";
    print_binary_str(decimal_number);

    return 0;
}
