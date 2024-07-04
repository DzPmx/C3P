#include <iostream>
#include <list>
#include <numeric>
#include <vector>
//
// Created by Dz on 24-7-2.
//
int main() {
    // std::vector<int> vec{1, 2, 3, 4};
    // std::cout << std::accumulate(vec.begin(), vec.end(), 0);
    //
    // std::vector<double> vec{1.1, 2.2, 3.3, 4.4};
    // std::cout << std::accumulate(vec.begin(), vec.end(), 0.0);

    std::list<std::string> s1{"dzpmx", "dzpmx", "yudong"};
    std::list<const char *> r1{"dzpmx", "dzpmx", "yudong"};
    std::list<const char *> r2{"dzpmx", "dzpmx", "yudong"};
    std::cout << std::equal(r1.begin(), r1.end(), s1.begin());//比较存储的内容是否相等
    std::cout << std::equal(r1.begin(), r1.end(), r2.begin());//实际是在比较指针存储的地址是否相等
}