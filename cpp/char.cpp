#include <iostream>
#define book_name "constant" // equivalent to [ const string book_name = "constant" ]

int main(){
    const double pi = 3.141592653589;
    
    char ch1, ch2, ch3, ch4;

    ch1 = 'A'; 
    std::cout << ch1 << std::endl;

    ch2 = 66; // char ch2 = 'B'
    std::cout << ch2 << std::endl;

    std::cout << (ch3 = 0x25);
    std::cout << (ch4 = 0100);

    return 0;
}