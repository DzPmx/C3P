//
// Created by Dz on 24-6-15.
//

#include <string>
#include <vector>

typedef std::string arr[10];
using arr = std::string[10];

//
std::string (&fun())[10];

//
arr &fun2();

//
auto fun3() -> std::string (&)[10];

int main() {
    auto i = fun();
    auto j = fun2();
    auto k = fun3();
}