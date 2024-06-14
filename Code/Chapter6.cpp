//
// Created by Dz on 24-6-12.
//

#include "Chapter6.h"
#include "iostream";


void absolute(double i) {
    std::cout << (i > 0 ? i : -i);
}

void fact(int i) {
    int k = 1;
    while (i > 1) {
        k *= i--;
    }
    std::cout << k << std::endl;
}