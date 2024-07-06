//
// Created by Dz on 24-7-6.
//

#include <iostream>
#include <list>
#include <valarray>
#include <vector>
int main() {
    std::vector vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // auto i = vec.rbegin();
    // while (i != vec.crend()) {
    //     std::cout << *i<<std::ends;
    //     ++i;
    // }
    // auto i = vec.end();
    // while (i != vec.begin()) {
    //     --i;
    //     std::cout << *i << std::ends;
    // }
    // auto i = std::find(vec.rbegin(), vec.rend(), 0);
    // std::cout << *i << std::ends << *(++i);
    // ;
    // auto end = vec.rend() -3;
    // auto begin = vec.rend() -8;
    std::list<int> i;
    // std::copy(begin, end, std::inserter(i, i.begin()));
    // for (auto value: i) {
    //     std::cout << value <<std::ends;
    // }
    auto begin = vec.begin() + 3;
    auto end = vec.begin() + 8;
    std::copy(begin, end, std::front_inserter(i));
    for (auto value: i) {
        std::cout << value << std::ends;
    }
}