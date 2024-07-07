//
// Created by Dz on 24-7-7.
//

#include <iostream>
#include <map>
#include <string>
#include <vector>
int main() {
    std::map<std::string, std::vector<std::pair<std::string, std::string>>> map_Family_Name;
    map_Family_Name["Dzpmx"] = {{"Lee", "0620"}};
    map_Family_Name["Leslie"] = {{"Lucy", "1101"}, {"Liu", "0000"}, {"Cindy", "0000"}};
    for (const auto &family_name: map_Family_Name) {
        for (auto kid_birht_pair: family_name.second) {
            std::cout << family_name.first << " : " << kid_birht_pair.first << " :" << kid_birht_pair.second << std::endl;
        }
    }
    //std::multimap<std::string, std::string> multimap_Family_Name;
}