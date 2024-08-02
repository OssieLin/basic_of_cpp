#include <iostream>
#include <string>
// deifferent ways to read input in cpp

int main(){
    std::cout << "std::cin takes input, please type in something:" << std::endl;
    std::string input_1;
    std::cin >> input_1;
    std::cout << "This types of input reads input until whitespace(space, tab, newline) is encountered";

    return 0;
}