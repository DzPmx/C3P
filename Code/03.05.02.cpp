//
// Created by Dz on 24-6-8.
//

#include "iostream"
#include "vector"

int main() {
    // constexpr size_t array_size=10;
    // int ia[array_size]{};
    // for (size_t ix=1;ix<array_size;++ix) {
    //     ia[ix]=ix;
    // }
    // int ib[array_size]{};
    //
    // for (int i = 0; i < array_size; ++i) {
    //     ib[i]=ia[i];
    // }
    //
    // for (auto ib1: ib) {
    //     std::cout << ib1;
    // }

    std::vector<int> vint(10);
    for (int i = 0; i < vint.size(); ++i) {
        vint[i]=i;
    }
    for (const auto ia1: vint) {
        std::cout << ia1<<std::endl;
    }

    std::vector<int> vint2=vint;


}