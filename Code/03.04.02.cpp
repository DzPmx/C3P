//
// Created by Dz on 24-6-5.
//

#include "cctype"
#include "iostream"
#include "string"
#include "vector"

int main() {
    // std::vector<int> vint;
    // for (int i = 0; i < 5; ++i) {
    //     int input;
    //     std::cin >> input;
    //     vint.push_back(input);
    // }
    //
    // const auto mid = vint.size() / 2;
    // //相邻相加
    // for (auto i = vint.begin(); i < vint.end()-1; ++i) {
    //     std::cout << *i+*(i+1)<<std::endl;
    // }
    //首尾相加
//     for (int i = 0; i < mid; ++i) {
//         std::cout << *(vint.begin() + i) + *(vint.end() - 1 - i) << std::endl;
// }

    int grade;
    std::vector<unsigned int> scores(11, 0);
    auto index=scores.begin();
    for (int i = 0; i < 14; ++i) {
        std::cin >> grade;
        ++(*(index+(grade/10)));
    }
    for (auto score: scores) {
        std::cout << score<<' ';
}
}