//
// Created by Dz on 24-6-2.

//引用关键字

#include <iostream>

int main() {
    // int ival = 1.01;//int &rvall=1.01;
    // int &rval2 = ival;
    // //int &rval3;
    //
    // int i = 0, &r1 = i;
    // double d = 0, &r2 = d;
    //
    // r2 = 3.1415926;
    // r2 = r1;
    // i = r2; //缩窄转换
    // r1 = d; //缩窄转换

    int i, &ri = i;
    i = 5;
    ri = 10;

    std::cout << i <<"||"<<ri;
}