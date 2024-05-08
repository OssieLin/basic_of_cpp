#include <iostream>
#include <vector>

#include <unordered_map>

int main(){
    // iterators are a way to iterate over a collection of element

    std::vector<int> values = {1, 2, 3, 4, 5};

    for (int i = 0; i < values.size(); i++){
        std::cout << values[i] << std::endl;
    }

    for (int value : values)
        std::cout << value << std::endl;

    for (std::vector<int>::iterator it = values.begin(); it !=values.end(); it++){
        std::cout << *it << std::endl;
    }

    using ScoreMap = std::unordered_map<std::string, int>;
    ScoreMap map;
    map["Osmond"] = 5;
    map["c++"] = 2;

    std::cout << std::endl;
    std::cout << "Iterating through a map: " << std::endl;

    for(ScoreMap::const_iterator it = map.begin(); it != map.end(); it++){
        auto& key = it -> first;
        auto& value = it -> second;

        std::cout << key << " = " << value << std::endl;
    }

    return 0;
}