#include <iostream>
//
// Created by Dz on 24-7-5.
//

void printSum(const int i) {
    auto fun = [i](const int j) { std::cout <<  i + j; };
    fun(3);
}

#include <algorithm>
#include <vector>

int main() {
    // auto f = [](const int i, const int j) { return i + j; };
    // auto j = f(3, 5);
    //std::cout << j << std::endl;
    printSum(20);

    // std::vector<std::string> vec{"ab", "ba", "ga", "cd", "view", "aim", "vulcan"};
    // auto i = std::stable_partition(vec.begin(), vec.end(), [](const std::string &str) { return str.size() > 2; });
    // std::for_each(i, vec.end(), [](const std::string &str) { std::cout << str << std::ends; });
}