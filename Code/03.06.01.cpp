//
// Created by Dz on 24-6-8.
//
#include "iostream"

#include <valarray>

int main() {
    int ia[3][4]{
            {1, 2, 3, 4},
            {2, 3, 4, 5},
            {3, 4, 5, 6},
    };
    //范围for循环 直接数据类型 版本1
    for (const int (&ia1)[4] : ia) {
        for (const int &val : ia1) {
            std::cout << val << ' ';
        }
        std::cout << std::endl;
    }

    //普通for循环 直接数据类型 版本2
    // for (int i = 0; i < 3; ++i) {
    //     for (int j = 0; j < 4; ++j) {
    //         std::cout << ia[i][j] << ' ';
    //     }
    // }

    // //普通for循环 直接数据类型 版本3
    // for (const int (*p)[4]=ia;p!=ia+3;++p) {
    //     for (const int *q=*p;q!=*p+4;++q) {
    //         std::cout << *q<<' ';
    //     }
    //     std::cout << std::endl;
    // }

    //普通for循环 auto 版本1
    for (const auto &ia1: ia) {
        for (const auto &val: ia1) {
            std::cout << val << ' ';
        }
    }

    //普通for循环 auto 版本3
    // for (auto p = std::begin(ia); p != std::end(ia); ++p) {
    //     for (auto q = std::begin(*p); q != std::end(*p); ++q) {
    //         std::cout << *q<<' ';
    //     }
    //     std::cout << std::endl;
    // }

    //普通for循环 auto 版本3
    // for (auto i = ia; i != ia+3; ++i) {
    //     for (auto j=*i;j!=*i+4;++j) {
    //         std::cout << *j<<' ';
    //     }
    //     std::cout << std::endl;
    // }



}