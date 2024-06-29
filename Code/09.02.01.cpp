//
// Created by Dz on 24-6-25.
//

#include <iostream>
#include <iterator>
#include <list>
bool isFind(std::list<int>::iterator begin, const std::list<int>::iterator &end, const int val) {

    while (begin != end) {
        if (*begin++ == val) {
            return true;
        }
    }
    return false;
}

[[nodiscard]] std::list<int>::iterator FindIndex(std::list<int>::iterator begin, const std::list<int>::iterator &end, const int val) {
    while (begin != end) {
        if (*begin == val) {
            std::cout << "Find!";
            return begin;
        } else {
            ++begin;
        }
    }
    std::cout << "Can't Find!";
    return end;
}

int main() {
    std::list<int> l = {1, 3, 5, 7, 9};

    // std::cout << isFind(l.begin(), l.end(), 2);
    const auto i = FindIndex(l.begin(), l.end(), 8);
    if (i != l.end()) {
        std::cout << *i << std::ends;
    }
}