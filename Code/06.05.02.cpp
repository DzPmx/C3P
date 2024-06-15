
//
// Created by Dz on 24-6-15.
//

#include <iostream>
#include <string>
bool isShorter(const std::string &s1, const std::string &s2) {
    return (s1.size() < s2.size());
}

int main() {
    std::cout << isShorter("s", "s2");
}