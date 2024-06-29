//
// Created by Dz on 24-6-24.
//

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
std::vector<std::string> SaveLine2Vector(const std::string &fileName) {
    std::vector<std::string> lines;
    std::string line;
    std::fstream file(fileName, std::fstream::in);
    if (!file) {
        std::cout << "Failed to read txt" << std::endl;
    }
    while (std::getline(file, line)) {
        lines.push_back(line);
    }
    return lines;
}

int main() {
    const std::string fileName = "Example.txt";
    std::vector<std::string> file = SaveLine2Vector(fileName);
    std::string word;
    for (const auto& file_name: file) {
        std::istringstream record(file_name);
        while (record >> word) {
            std::cout << word << std::endl;
        }
    }

}