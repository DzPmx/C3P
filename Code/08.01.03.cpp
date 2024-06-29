//
// Created by Dz on 24-6-23.
//

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
[[nodiscard]] std::vector<std::string> ReadFile2Vector(const std::string &fileName) {
    std::vector<std::string> lines;//不能用临时变量返回引用，否则会值消失
    std::ifstream file(fileName);
    if (!file) {
        std::cout << "Error" << std::endl;
        return lines;
    } else {
        std::cout << "Yes" << std::endl;
    }
    std::string line;
    while (file >> line) {
        lines.push_back(line);
    }
    file.close();
    return lines;
}

void WriteCotent2File(const std::string &fileName) {

    std::ofstream file(fileName,std::ofstream::app);
    if (!file) {
        std::cout << "Error" << std::endl;
    } else {
        std::cout << "Yes" << std::endl;
    }
    std::string line;
    std::cin>>line;
    file << line;
    file.close();
}

int main() {
    std::string fileName = "Example.txt";
    //std::vector<std::string> lines = ReadFile2Vector(fileName);
    WriteCotent2File(fileName);
    // for (auto i = lines.begin(); i != lines.end(); ++i) {
    //     std::cout << *i << std::endl;
    // }
}