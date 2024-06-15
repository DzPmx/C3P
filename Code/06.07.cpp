#include <iostream>
#include <vector>
//
// Created by Dz on 24-6-16.
//
int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int devi(int a, int b) {
    return a / b;
}

int main() {
    const std::vector<int (*)(int, int)> b{sum, sub, mul, devi};
    for (const auto value: b) {
        std::cout << value(3, 3);
    }
}