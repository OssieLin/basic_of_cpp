#include <iostream>

//array is an collection of variables

class Entity{
public:
    int example[5];

    Entity(){
        for(int i =0; i<5; i++)
            example[i] = 2;
    }

};

int main(){
    int example[5]; // this is an integer pointer
    // stack memory allocation
    example [0] = 5;
    example [4] = 4;
    std::cout << " First element of example: "<< example [0] << std::endl;

    int size = sizeof(example)/sizeof(example[0]);

    for(int i = 0; i<5; i++) example[i] = 2;
    

    int* another = new int[5];
    //create on a heap
    for(int i = 0; i<5; i++){
        another[i] = i;
        std::cout << another [i] << std::endl;
    }
    delete[] another;
    
    std::cout << "The memory address of example: " << example << std::endl; // print out the memory address

    return 0;
}
