# include <iostream>
# include <vector>


int main(){
    std::cout << "A vector is a dynamic array." << std::endl;
    std::cout << "It's basically an array" << std::endl;
    std::cout << "";
    std::vector <int> v = {1,2,3,4,5};
    std::cout << "Capacity of the vector: " << v.capacity() << std::endl;
    std::cout << "size of the vector: " << v.size() << std::endl;
    return 0;

}