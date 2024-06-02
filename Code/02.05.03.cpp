//
// Created by Dz on 24-6-2.
//
#include<iostream>
int main() {
    int a=3,b=4;
    decltype(a) c=a;    //返回int类型
    decltype((b))d=a;   //返回int&类型
    ++c;
    ++d;
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<c<<std::endl;
    std::cout<<d<<std::endl;
}