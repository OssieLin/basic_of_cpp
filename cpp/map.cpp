#include <iostream>
#include <map>

int main(){
    std::map<char, int> sv = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
    }; // symbol to value
       
    std::pair<char, int>p1 ('M',1000);
    sv.insert(p1);
    std::cout << "The new key-pair value: " << sv['M'] << std::endl;
    std::cout << "Size of the sv map: "<< sv.size() << std::endl;
    std::cout << std::endl;

    std::cout << "sv.begin() -> first: " << sv.begin()->first << ", it points to the \"key\" in the first element" << std::endl;
    std::cout << "sv.begin() -> second: " << sv.begin() -> second << ", it points to the \"value\" in the first element "<< std::endl;
    std::cout << std::endl;
    
    for (auto itr = sv.begin(); itr != sv.end(); ++itr){ // auto returns the type based on the object
        std::cout << (*itr).first << " = "
        << itr -> second << std::endl; 
    }

    return 0;
}