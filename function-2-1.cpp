#include <iostream>
#include <string>
#include <bitset>

void print_binary_str(std::string decimal_number) {

    int num = std::stoi(decimal_number);
    
    std::string binary = std::bitset<30>(num).to_string();

    binary = binary.substr(binary.find('1'));

    std::cout << binary << std::endl;
}
