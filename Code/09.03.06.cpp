//
// Created by Dz on 24-6-30.
//

#include <forward_list>
#include <iostream>
#include <list>
#include <ostream>
int main() {
    std::list<int> vi{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert(iter, *iter);
            ++ ++iter;
        } else {
            iter = vi.erase(iter);
        }
    }
    for (auto value: vi) {
        std::cout << value << std::ends;
    }

    std::forward_list<int> fl{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto fiter = fl.begin();
    auto pre = fl.before_begin();
    while (fiter != fl.end()) {
        if (*fiter % 2) {
            fiter = fl.insert_after(fiter, *fiter);
            pre = fiter;
            ++fiter;
        } else {
            fiter = fl.erase_after(pre);//erase删除后，返回删除后面的迭代器
        }
    }
    std::cout << std::endl;
    for (auto value: fl) {
        std::cout << value << std::ends;
    }


}