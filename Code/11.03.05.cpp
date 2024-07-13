//
// Created by Dz on 24-7-8.
//

#include <iostream>
#include <map>
#include <string>
#include <vector>
int main() {
    // std::map<std::string, std::vector<int>> string_map{std::make_pair("dzpmx", std::vector{1, 2, 3, 4, 5, 6})};
    // auto i = string_map.find("dzpmx");
    // for (auto map: string_map) {
    //     for (auto value: map.second) {
    //         std::cout << map.first << " : " << value << std::endl;
    //     }
    // }

    std::multimap<std::string, std::string> auther_pairs{std::make_pair("dzpmx", "low"), std::make_pair("yudong", "docter"),std::make_pair("dzpmx","Cpp")};
    auto iter = auther_pairs.find("k");
    // if (iter != auther_pairs.end()) {
    //     auther_pairs.erase(iter);
    // } else {
    //     std::cout << "Null" << std::endl;
    // }
    for (auto auther_pair: auther_pairs) {
        std::cout << auther_pair.first << " : " << auther_pair.second << std::endl;
    };

}