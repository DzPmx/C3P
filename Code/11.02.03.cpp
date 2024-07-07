//
// Created by Dz on 24-7-7.
//

#include <deque>
#include <iostream>
#include <list>
#include <string>
#include <vector>
int main() {

    std::vector<std::string> lst{"a", "b", "c", "d"};
    std::deque<int> dq{1, 2, 3, 4};
    std::vector<std::pair<std::string, int>> vec;
    for (int i = 0; i < lst.size(); ++i) {
        //vec.emplace_back(std::make_pair(lst[i], dq[i]));
        //vec.emplace_back(std::pair<std::string, int>(lst[i], dq[i]));
    }
    for (auto basic_string: vec) {
        std::cout << basic_string.first << " : " << basic_string.second << std::endl;
    }
}