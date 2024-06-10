//
// Created by Dz on 24-6-10.
//
#include "vector"

#include "iostream"

int main() {
    int i;
    double d;
    d = i = 3.5;
    std::cout << d<<' '<< i<<std::endl;

    i = d = 3.5;
    std::cout << d<<' '<< i<<std::endl;

    double dval; int ival; int*pi;
    ival=*pi=dval=0;

    std::vector<int> vint;
    auto b=vint.begin();
}