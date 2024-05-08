#include <iostream>
#include <string>
// string is an array of characters

void PrintString(const std::string& string){ // add a referemce, so we're copying another string
    std::cout << string << std::endl;
}

int main(){
    const char* name = "Osmond"; //double quote for char pointer
    std::cout << name << std::endl;
    
    char name2[4] = {'L','i','n','\0'};//single quote uses for character
    // "\0" is a null character
    std::cout << name2 << std::endl;

    std::string name3 = "YUWEI";
    PrintString(name3);

    return 0;
}