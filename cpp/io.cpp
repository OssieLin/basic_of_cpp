#include <iostream>
#include<cstdio>

int main(){
    int yy, mm, dd;
    printf("BirthDay (yyyy-mm-dd): ");
    scanf("%d-%d-%d", &yy, &mm, &dd); // & reference: allow the function to modify the original variable
    printf("year:%d  month:%d  date:%d\n", yy, mm, dd);


    char name[15];
    std::cout << "Please input a name: ";
     // Clear the input buffer after scanf to prevent issues with cin
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.getline(name,15);
    std::cout << name << std::endl;

    char name2[15];
    std::cout << "Please input a name with 'r' in it: " << std::endl; 
    std::cin.getline(name2,15,'r');
    std::cout << name2 << std::endl;

}