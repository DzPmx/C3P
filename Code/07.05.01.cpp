//
// Created by Dz on 24-6-22.
//
#include "iostream"

struct X {
    X(int i, int j) : base(i), rem(base % j) {}
    int base, rem;
};


class Test {
    // explicit Test(std::istream &is = std::cin) : x(is){};
    // explicit Test(std::string str = " ") : y(str){};
    // explicit Test(std::string str = " ") : x(str){};

    // //std::istream &x;
    // std::string x;
    // std::string y;
};