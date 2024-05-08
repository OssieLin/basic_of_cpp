#include <iostream>

// Method: A member function, a function belongs to a class
// "This" is only accessible to a member function
// It's a pointer to the current instance

class Car{
    public:
        void printThisPointer() const{
            std::cout << this << std::endl;
        }
};

int main(){
    Car car;
    std::cout << &car << std::endl;
    car.printThisPointer();

}