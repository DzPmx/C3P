
//
// Created by Dz on 24-6-30.
//

#include <iostream>
#include <vector>
int main() {
    std::vector<int> vec{1, 3, 5, 7};
    vec.erase(vec.begin(),vec.end());
    for (const auto value: vec) {
        std::cout << value;
    }

}