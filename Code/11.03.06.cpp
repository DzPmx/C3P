//
// Created by Dz on 24-7-9.
//

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

//返回所有值
std::string transform(const std::map<std::string, std::string> &transTable, const std::string &str) {
    auto i = transTable.find(str);
    if (i != transTable.end()) {
        return i->second;
    } else
        return str;
}

std::map<std::string, std::string> getTransTable(std::ifstream &ifs) {
    std::map<std::string, std::string> transTable;
    std::string key;
    std::string map;
    while (ifs >> key && std::getline(ifs, map)) {
        if (map.size() > 1)
            transTable[key] = map.substr(1);
        else {
            transTable[key] = "null";
        }
    }
    return transTable;
}

void wordTrans(std::ifstream &map_file, std::ifstream &input) {
    auto trans_map = getTransTable(map_file);
    std::string text;
    while (std::getline(input, text)) {
        std::istringstream iss(text);
        std::string word;
        bool firstworld = true;
        while (iss >> word)
            if (firstworld)
                firstworld = false;
            else
                std::cout << " ";
        std::cout << transform(trans_map, word);
    }
}
int main() {
}