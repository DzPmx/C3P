//
// Created by Dz on 24-7-7.
//

#include <iostream>
#include <list>
int main() {
    std::list<int> lst{1, 3, 5, 7, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    lst.sort();
    lst.unique();
    // for (auto value: lst) {
    //     std::cout << value << std::ends;
    // }
    std::ostream_iterator<int> os(std::cout, " ");
    for (auto value: lst) {
        os = value;
    }
}