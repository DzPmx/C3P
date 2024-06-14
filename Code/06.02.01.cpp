//
// Created by Dz on 24-6-12.
//

#include "iostream"

void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    std::cout << *p1 << ' ' << *p2 << std::endl;
}

int main() {
    int a = 42;
    int b = 57;
    swap(&a, &b);
    std::cout << a << ' ' << b << std::endl;
}