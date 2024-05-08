#include <iostream>

//struct is similar to class
//, but its visibility is defaulted to be public
struct myStruct{
float x,y;

    void add(){
        std::cout << x+y << std::endl;
    }

};

int main(){
    myStruct struct1;
    struct1.x = 1;
    struct1.y = 2;
    struct1.add();
    return 0;
}