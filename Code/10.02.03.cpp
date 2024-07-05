//
// Created by Dz on 24-7-3.
//

#include <algorithm>
#include <iostream>
#include <vector>
bool isShorter(const std::string &s1, const std::string &s2) {
    return s1.size() < s2.size();
}

bool DoPartition(const std::string &str) {
    return str.length() < 5;
}
int main() {
    // std::vector<std::string> vec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "trutle"};
    // std::sort(vec.begin(), vec.end());
    // auto unique = std::unique(vec.begin(), vec.end());
    // vec.erase(unique, vec.end());
    // for (auto value: vec) {
    //     std::cout << value << std::ends;
    // }
    // std::cout << std::endl;
    // std::stable_sort(vec.begin(), vec.end(), isShorter);
    // for (auto value: vec) {
    //     std::cout << value << std::ends;
    // }

    std::vector<std::string> vec{"dzpmx", "yudong", "leseline", "lee", "view", "aim", "vulcan"};
    int part=6;
    auto i = std::partition(vec.begin(), vec.end(), [part](const std::string &str){return str.size()<part;});
    while (i != vec.end()) {
        std::cout << *i << std::ends;
        ++i;
    }
}