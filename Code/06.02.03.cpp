#include <iostream>
#include <string>
#include <vector>
//
// Created by Dz on 24-6-15.
//
bool isEmpty(const std::string &str) {
    return str.empty();
}

bool haveUpper(const std::string &str) {
    bool haveUpper = false;
    for (const auto &element: str) {
        if (std::isupper(element))
            haveUpper = true;
    }

    return haveUpper;
}

void convert2Lower(std::string &str) {
    for (auto &element: str) {
        element = toupper(element);
    }
}

bool compare(const int &a, const int &b);
std::vector<int> change_val(const int a, std::vector<int> &b);

int main() {
    bool s = haveUpper("stR");
    std::cout << s << ' ' << std::endl;
    std::string str = "stR";
    convert2Lower(str);
    std::cout << str << ' ';
}