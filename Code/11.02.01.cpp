//
// Created by Dz on 24-7-7.
//

#include <iostream>
#include <map>
#include <string>
#include <vector>
int main() {
    std::map<std::string, std::vector<std::string>> map_Family_Name;
    map_Family_Name["Dzpmx"] = {"Lee"};
    map_Family_Name["Leslie"] = {"Lucy", "Liu", "Cindy"};
    for (auto map_family_name: map_Family_Name) {
        for (auto val: map_family_name.second) {
            std::cout << map_family_name.first << " : " << val << std::endl;
        }

    }
    //std::multimap<std::string, std::string> multimap_Family_Name;
}