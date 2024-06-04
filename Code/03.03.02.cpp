//
// Created by Dz on 24-6-4.
//
#include "iostream"
#include "string"
#include "vector"

int main() {

    std::vector<std::string> ivec;
    // int input=0;
    // for (int i = 0; i < 3; ++i) {
    //     std::cin>>input;
    //     ivec.push_back(input);
    // }

    std::string input;
    for (int i = 0; i < 3; ++i) {
        std::cin>>input;
        ivec.push_back(input);
    }
    for (const auto& value: ivec) {
        std::cout<<value<<std::endl;
    }
}