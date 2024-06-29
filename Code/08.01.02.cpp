//
// Created by Dz on 24-6-23.
//

#include <iostream>
std::istream &func(std::istream &is) {
    int input;
    while (is >> input) {
        std::cout << input << std::endl;
    }
    is.clear();
    return is;
}

int main() {
    func(std::cin);
}