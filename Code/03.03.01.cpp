//
// Created by Dz on 24-6-4.
//
#include"vector"
#include"string"
#include"iostream"

int main() {

    std::vector<std::vector<int>> ivec;
    //std::vector<std::string> svec=ivec;
    std::vector<std::string> svec(10,"Hello");

    std::vector<int >v1;
    std::vector<int>v2(10);
    std::vector<int>v3(10,42);
    std::vector<int>v4{10};
    std::vector<int>v5{10,42};
    std::vector<std::string> v6{10};
    std::vector<std::string> v7{10,"hi"};

}