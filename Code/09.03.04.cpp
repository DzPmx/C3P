//
// Created by Dz on 24-6-30.
//

#include <forward_list>
#include <iostream>

void insertForwardList(std::forward_list<std::string> &flist, const std::string &a, const std::string &b) {
    auto pre = flist.before_begin();
    auto curr = flist.begin();
    const auto end = flist.end();
    bool isFind = false;
    while (curr != end) {
        if (*curr == a) {
            curr = flist.insert_after(curr, b);
            isFind = true;
            pre = curr;
            ++curr;
        } else {
            pre = curr;
            ++curr;
        }
    }
    if (!isFind) {
        flist.insert_after(pre, b);
    }
}

int main() {

    //移除奇数
    // std::forward_list<int> flist{1, 2, 3, 4, 5, 6, 7, 8, 9};
    // auto prev = flist.before_begin();
    // auto current = flist.begin();
    // while (current != flist.end()) {
    //     if (*current % 2 == 1) {
    //         current = flist.erase_after(prev);
    //     } else {
    //         prev = current;
    //         ++current;
    //     }
    // }
    // for (const auto value: flist) {
    //     std::cout << value << std::ends;
    // }

    //2
    std::forward_list<std::string> flist{"1", "3", "5", "7","5"};
    insertForwardList(flist, "5", "dzpmx");
    for (const auto &basic_string: flist) {
        std::cout << basic_string << std::ends;
    }

}