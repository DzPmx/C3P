//
// Created by Dz on 24-7-8.
//

#include <iostream>
#include <map>
#include <string>
#include <vector>
int main() {
    std::map<std::string, std::vector<int>> map_pair;
    auto i = map_pair.insert({"dzpmx", {1, 2, 3, 4, 5}});
    std::cout << i.second<<std::endl;
    std::cout << i.first->second.at(0);
}