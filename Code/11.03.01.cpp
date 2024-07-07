//
// Created by Dz on 24-7-8.
//

#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <vector>
int main() {
    // std::map<int, std::vector<int>> map_Int_Vec;
    // std::map<int, std::vector<int>>::key_type;   //int
    // std::map<int, std::vector<int>>::mapped_type;//vec
    // std::map<int, std::vector<int>>::value_type; //pair<int,vec>
    // auto iter = std::inserter(map_Int_Vec, map_Int_Vec.begin());
    // *iter = {3, {5, 7, 9}};
    // ++iter;
    // *iter = {6, {8, 7, 9}};
    // for (auto map_int_vec: map_Int_Vec) {
    //     for (auto val: map_int_vec.second) {
    //         std::cout << map_int_vec.first << " : " << val << std::endl;
    //     }
    // }

    // std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    // std::multiset<int> mset{9, 8, 7, 6, 5, 4, 3, 2, 1};
    // std::copy(vec.begin(), vec.end(), std::inserter(mset, mset.end()));
    //std::copy(vec.begin(), vec.end(), std::back_inserter(mset));    //set关联容器没有push back功能
    //std::copy(mset.begin(), mset.end(), std::inserter(vec, vec.end()));
    // std::copy(mset.begin(), mset.end(), std::back_inserter(vec));
    // for (auto value: vec) {
    //     std::cout << value << std::ends;
    // }
    // std::ostream_iterator<int> os{std::cout};
    // auto i = vec.begin();
    // while (i != vec.end()) {
    //     os = *i;
    //     ++i;
    // }
    std::map<int, std::string> map_int_pairs{{1, "5"}, {2, "s"}};
    std::map<int, std::string>::iterator iter = map_int_pairs.begin();
    while (iter != map_int_pairs.end()) {
        std::cout << iter->first << ":" << iter->second << std::endl;
        ++iter;
    }

}