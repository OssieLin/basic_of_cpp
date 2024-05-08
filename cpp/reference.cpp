#include <iostream>

// reference is a way for us to reference an existing variable
// Unlike pointer, they are not a variable itself

void increment(int& value){
    value++;
}

//this is essentially

void increment_no_reference(int* value){
    (*value)++;
}//pass the memory address of variable into the function

int main(){
    int a = 5;
    // & ampersand can be reference or "address of"
    int& ref = a; // create an alias
    ref = 2;
    
    increment(a);
    std::cout << a;

    return 0;
}