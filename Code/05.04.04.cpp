//
// Created by Dz on 24-6-11.
//

#include "iostream"
#include "string"
int main() {

    std::string str1;
    std::string str2;
    do {

        std::cin >> str1>>str2;
        std::cout << (str1.size()<str2.size()?str1:str2);

    } while (str1.size()!=str2.size());
}