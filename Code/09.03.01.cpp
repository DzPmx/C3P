
//
// Created by Dz on 24-6-30.
//

#include <deque>
#include <iostream>
#include <list>
#include <string>
#include <vector>
int main() {
    // std::string str;
    // std::deque<char> dq;
    // std::list<char> lst;
    // std::cin >> str;
    // for (const auto &value: str) {
    //     dq.push_back(value);
    //     lst.push_back(value);
    // }
    // for (const auto val: dq) {
    //     std::cout << val << std::ends;
    // }
    // std::cout << std::endl;
    // for (const auto value: lst) {
    //     std::cout << value<<std::ends;
    // }

    // const std::list<int> lst{1, 2, 3, 4, 5, 6, 7, 8, 9};
    // std::deque<int> dqa;
    // std::deque<int> dqb;
    // for (auto value: lst) {
    //     if (value % 2 == 0)
    //         dqa.push_back(value);
    //     else
    //         dqb.push_back(value);
    // }
    //
    // for (const auto value: dqa) {
    //     std::cout << value << std::ends;
    // }
    // std::cout << std::endl;
    // for (const auto value: dqb) {
    //     std::cout << value << std::ends;
    // }
    // std::vector<int> iv{1, 2, 3, 4, 3, 2, 7, 8, 9};
    // iv.insert(iv.begin(),iv.begin(),iv.end());
    // auto iter = iv.begin();
    // auto mid = iv.size() / 2 + iv.begin();
    // while (iter != mid) {
    //     if (*iter == 2) {
    //         iter = iv.insert(iter, 4);
    //         ++iter;
    //     }
    //     ++iter;
    // }

    //不能这么写 针对vector 插入的迭代器范围不能指向自身的元素范围
    std::vector<int> iv{1, 2, 3, 4, 5, 6, 7, 8, 9};
    iv.insert(iv.begin(), iv.begin(), iv.end());
    for (const auto value: iv) {
        std::cout << value << std::ends;
    }
}