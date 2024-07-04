#include <iostream>
#include <iterator>
#include <list>
#include <vector>
//
// Created by Dz on 24-7-2.
//
int main() {
    // std::vector<int> vec;
    // std::fill_n(std::back_inserter(vec), 10, 0);
    // for (auto value: vec) {
    //     std::cout << value<<std::ends;
    // }

    // std::list<int> lst;
    // int i;
    // while (std::cin >> i)
    //     lst.push_back(i);
    // std::vector<int> vec(lst.size());
    // std::copy(lst.cbegin(), lst.cend(), vec.begin());
    // for (auto value: vec) {
    //     std::cout << value << std::ends;
    // }

    std::vector<int> vec;
    vec.resize(10);
    //vec.reserve(10);
    std::fill_n(vec.begin(), 10, 5);
}