
//
// Created by Dz on 24-6-11.
//


#include <iostream>
#include <vector>
int main() {
    std::vector<int> vint1{0,1,1,2};
    std::vector<int> vint2{0,1,1,2,3,5,8};
    bool isSame=false;
    auto smaller=vint1.size()<vint2.size()?vint1:vint2;
    for (auto index=0;index<=smaller.size()-1;++index) {
        if (vint1[index]!=vint2[index]) {
            isSame=false;
            break;
        }
        else {
            isSame=true;
        }
    }
    std::cout << isSame;

}