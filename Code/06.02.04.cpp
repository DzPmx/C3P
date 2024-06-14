//
// Created by Dz on 24-6-15.
//

#include <iostream>
void compare(const int &a, const int *&b) {
    std::cout << (a > *b ? a : *b);
}

void swap(const int *&a, const int *&b) {
    const int *temp = a;//这里不能引用，否则a一变，temp也变
    a = b;
    b = temp;
    std::cout << *a << ' ' << *b << std::endl;
}

void print(const int ia[], const size_t size) {
    for (auto i = 0; i < size; ++i) {
        std::cout << ia[i] << std::endl;
    }
}

int main() {
    // constexpr int a = 5;
    // const int *b = &a;
    // compare(3, b);

    const int a = 3;
    const int b = 5;
    const int *ptra = &a;
    const int *ptrb = &b;
    swap(ptra, ptrb);
}