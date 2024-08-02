#include <iostream>

int main(){
    // 5 (decimal) = 0101 (bin)
    // 3 (decimal) = 0011 (bin)
    int a = 5, b = 3;
    std::cout << (a&b) << std::endl; // 1
    std::cout << (a|b) << std::endl; // 7
    std::cout << (a^b) << std::endl; // 6

}