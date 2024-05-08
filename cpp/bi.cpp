#include <iostream>

int main(){
    // <<: bitshift left
    // <<: bitshift right

    int a = 10;
    std::cout << "int a = 10; " << std::endl;
    int b = a << 1;
    
    std::cout << "Shit a one bit to the left: " << b << std::endl;
    std::cout << "Shift n to the left is essentially times 2 to the n." << std::endl;
    std::cout << std::endl;

    b = a >> 1;

    std::cout << "Shift a one bit to the right: " << b << std::endl;
    std::cout << "Shift n to the right is essentially divide 2 to the n.";
    
    return 0;
}