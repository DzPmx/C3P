//
// Created by Dz on 24-7-5.
//

#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    // int i = 7;
    // auto fun1 = [i]() mutable {++i;std::cout <<  i; };
    //
    // fun1();

    // std::vector<std::string> vec{"dzpmx", "yudong", "leseline", "lee", "view", "aim", "vulcan"};
    // int count = 0;
    // auto i = std::count_if(vec.begin(), vec.end(), [](const std::string &str) mutable -> int { return str.length() >3; });
    // std::cout << i << std::ends;
    int j = 2;
    auto fun = [&j]() mutable -> bool { --j; return 0==j?true:false; };
    std::cout << fun();
    std::cout << fun();
}