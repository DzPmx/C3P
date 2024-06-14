//
// Created by Dz on 24-6-15.
//

#include <initializer_list>
#include <iostream>

void calSum(const std::initializer_list<int> arr) {
    int sum = 0;
    for (const auto &element: arr) {
        sum += element;
    }
    std::cout << sum;
}
int main() {
    calSum({1,3,5,7});
}