//
// Created by Dz on 24-6-15.
//

#include <iostream>
#include <vector>


int &get(int *array, const int index) {
    return array[index];
}


int fracotrial(int val) {
    if (val != 0)
        return fracotrial(val - 1) * val;
}

int main() {
    int ia[10];
    for (int i = 0; i < 10; ++i) {
        get(ia, i) = i;
    }
    for (const auto ia1: ia) {
        std::cout << ia1;
    }
}