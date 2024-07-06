//
// Created by Dz on 24-7-6.
//

#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
int main() {
    // std::vector<int> vec{1, 3, 3, 4, 5, 1, 2, 5, 4, 5};
    // std::list<int> lst;
    // std::sort(vec.begin(), vec.end());
    // auto i = std::unique_copy(vec.begin(), vec.end(), std::inserter(lst, lst.begin()));//unique只会比较连续的相等
    // for (const auto value: lst) {
    //     std::cout << value << std::ends;
    // }

    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::list<int> a;
    std::list<int> b;
    std::list<int> c;
    std::copy(vec.begin(), vec.end(), std::back_inserter(a));
    std::copy(vec.begin(), vec.end(), std::front_inserter(b));
    std::copy(vec.begin(), vec.end(), std::inserter(c, c.begin()));
    for (auto value: a) {
        std::cout << value << std::ends;
    }
    std::cout << std::endl;
    for (auto value: b) {
        std::cout << value << std::ends;
    }
    std::cout << std::endl;
    for (auto value: c) {
        std::cout << value << std::ends;
    }
    std::cout << std::endl;
}