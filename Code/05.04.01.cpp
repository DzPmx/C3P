//
// Created by Dz on 24-6-11.
//
//
// Created by Dz on 24-6-10.
//

#include "iostream"
#include "string"
#include "vector"

int main() {
    std::vector<std::string> vstr;
    std::string str;
    unsigned max = 1;
    unsigned currentCount = 1;
    while (std::cin >> str) {
        if (str == "q") {
            break;// 退出循环
        } else {
            vstr.push_back(str);
        }
    }
    for (auto begin = vstr.begin(); begin != vstr.end()-1; ++begin)
        if (*begin == *(begin + 1)) {
            ++currentCount;
        }
        else {
            max = currentCount > max ? currentCount : max;
            currentCount = 1;
        }
    //最后一个等于前一个
    max = currentCount > max ? currentCount : max;
    std::cout << max << std::endl;
}