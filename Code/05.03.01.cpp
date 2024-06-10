//
// Created by Dz on 24-6-10.
//

#include "iostream"
#include "string"
#include "vector"

int main() {
    unsigned num = 0;
    std::string str;
    std::getline(std::cin, str);

    for (auto begin=str.begin();begin!=str.end();++begin) {
        if ('f'==*begin) {
            if (*(begin+1)=='f'||*(begin+1)=='l'||*(begin+1)=='i')
                ++num;

        }

        char ch = std::toupper(*begin);
        //统计元音
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            ++num;
        //统计空格
        else if (std::isspace(ch))
            ++num;

    }
    std::cout << str << std::endl;
    std::cout << num << std::endl;
}