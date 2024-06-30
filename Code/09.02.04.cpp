//
// Created by Dz on 24-6-30.
//

#include <iostream>
#include <list>
#include <string>
#include <vector>
int main() {
    std::list<std::string> authors{"Milton", "Shakespeare", "Austen"};
    std::vector words(authors.begin(), authors.end());
    std::cout << words[1];

    std::vector<int> a{0};
    std::vector<int> b(5);
    std::vector<int> c(5, 10);
    std::vector<int> d = c;
    std::list<int> l = {1, 3, 5, 7};
    std::vector<int> e(l.begin(), l.end());

    std::vector<double> d2i(l.begin(), l.end());
    std::vector vi{3, 5, 7};
    std::vector<double> st{vi.begin(), vi.end()};
}