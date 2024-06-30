//
// Created by Dz on 24-6-30.
//

#include <iostream>
#include <list>
#include <vector>
int main() {
    std::vector<int> a{1, 3, 5, 7};
    std::vector<int> b{1, 3, 7, 9};
    std::cout << (a == b) << std::ends;

    std::list<int> c{1, 3, 5, 7};
    std::vector<int> d{1, 3, 5, 7};
    std::list<int> e;
    e.assign(d.begin(), d.end());
    std::cout << (c == e) << std::ends;
}