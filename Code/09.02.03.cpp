//
// Created by Dz on 24-6-30.
//

#include <vector>
int main() {
    std::vector<int> v1;
    const std::vector<int> v2;
    auto it1 = v1.begin();
    auto it2=v1.cbegin();
    auto it3=v2.begin();
    auto it4=v2.cbegin();
}