//
// Created by Dz on 24-7-6.
//

#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <vector>

int main() {
    //1
    // std::vector<std::string> vec;
    // std::ifstream is("Example.txt");
    // std::istream_iterator<std::string> iter(is), eof;
    // while (iter != eof) {
    //     vec.push_back(*iter++);
    // }
    // for (auto basic_string: vec) {
    //     std::cout << basic_string<<std::ends;
    // }

    //2
    // std::istream_iterator<int> iter(std::cin), eof;
    // std::list<int> lst(iter, eof);//不支持随机访问排序
    // lst.sort();
    // std::ostream_iterator<int> oter(std::cout, " ");
    // //std::copy(lst.begin(), lst.end(),oter);
    // std::unique_copy(lst.begin(),lst.end(),oter);

    //3
    std::ifstream is("Input.txt");
    std::ofstream os1("Output1.txt");
    std::ofstream os2("Output2.txt");

    std::istream_iterator<int> iter(is), eof;
    std::ostream_iterator<int> oter1(os1, " ");
    std::ostream_iterator<int> oter2(os2, "\n");
    while (iter != eof) {
        if (*iter % 2 == 1) {
            oter1 = *iter;
        } else {
            oter2 = *iter;
        }
        ++iter;
    }

}