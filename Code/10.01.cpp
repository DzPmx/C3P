//
// Created by Dz on 24-7-2.
//

#include <algorithm>
#include <iostream>
#include <list>
#include <ostream>
#include <vector>
int main() {
    // std::vector<int> vec{1, 2, 3, 4, 5, 8, 1, 3, 2, 1};
    // std::cout << std::count(vec.begin(), vec.end(), 2) << std::endl;
    std::list<std::string> lst{"dzpmx", "dzpmx", "yudong"};
    std::cout << std::count(lst.begin(), lst.end(), "0");
}