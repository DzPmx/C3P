#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
//
// Created by Dz on 24-7-5.
//

#
bool checkSize(const int &s1, std::string::size_type size) {
    return s1 > size;
}

bool DoPartition(const std::string &str, std::string::size_type size) {
    return str.length() < size;
}

int main() {
    std::vector<std::string> vec{"dzpmx", "yudong", "leseline", "lee", "view", "aim", "vulcan"};
    // std::cout << std::count_if(vec.begin(), vec.end(), std::bind(isShorter, std::placeholders::_1, 4));

    // std::vector<int> vec{1, 2, 5, 4, 5, 6};
    // std::string str = "ab";
    // auto i = std::find_if(vec.begin(), vec.end(), std::bind(checkSize, std::placeholders::_1, str.length()));
    // std::cout <<str.length()<<std::ends<< *i << std::endl;
    auto i = std::partition(vec.begin(), vec.end(), std::bind(DoPartition, std::placeholders::_1, 3));
    std::for_each(i, vec.end(), [](auto i) { std::cout << i << std::ends; });
}