
//
// Created by Dz on 24-6-30.
//

#include <iostream>
#include <vector>
int main() {
    std::vector<int> a(10, 6);
    a.resize(100);
    for (const auto a1: a) {
        std::cout << a1 << std::endl;
    }
    a.resize(10,25);
    for (const auto a1: a) {
        std::cout << a1<<std::endl;
    }
}