
//
// Created by Dz on 24-6-30.
//

#include <iostream>
#include <list>
#include <string>
#include <vector>
int main() {
    std::list<const char *> a{"dzpmx", "here"};
    std::vector<std::string> vs{a.begin(), a.end()};
    std::cout << (vs[1])[0];
}
