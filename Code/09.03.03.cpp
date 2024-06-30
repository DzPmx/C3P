#include <iostream>
#include <list>
#include <vector>
//
// Created by Dz on 24-6-30.
//
int main() {
    int ia[]{0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    std::list<int> lista;
    std::vector<int> veca;
    for (const auto ia1: ia) {
        lista.push_back(ia1);
        veca.push_back(ia1);
    }
    for (auto i = ++lista.begin(); i != lista.end();) {
        i = lista.erase(i);
        if (i != lista.end()) {
            ++i;
        }
    }
    for (auto ia1: lista) {
        std::cout << ia1 << std::ends;
    }
    std::cout << std::endl;
    for (auto i = veca.begin(); i != veca.end();) {
        i = veca.erase(i);
        if (i != veca.end()) {
            ++i;
        }
    }
    for (auto ia1: veca) {
        std::cout << ia1 << std::ends;
    }
}