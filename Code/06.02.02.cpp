//
// Created by Dz on 24-6-12.
//

#include <iostream>
void reset(int &i) {
    i = 0;
}

void swap(int &p1, int &p2) {
    int temp = p1;
    p1 = p2;
    p2 = temp;
}

int main() {
    int i = 67;
    int j = 58;
    swap(i, j);
    // reset(i);
    std::cout << i << ' ' << j << std::endl;
}