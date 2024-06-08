//
// Created by Dz on 24-6-8.
//

#include <iostream>
#include <vector>
int main() {
    // int arr[]={1,3,5,7,9,10};
    // std::vector<int> vint(std::begin(arr),std::end(arr));
    //
    // for (const auto val: vint) {
    //     std::cout <<val<<' ';
    // }

    std::vector<int> vint{1,3,5,7,9};
    int arr[7]{};

    for (int i = 0; i < vint.size(); ++i) {
        arr[i]=vint[i];
    }

    for (const auto value: arr) {
        std::cout << value<<' ';
    }

}