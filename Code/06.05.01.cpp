//
// Created by Dz on 24-6-15.
//

#include <iostream>
#include <string>
int ff(int a, int b = 0, int c = 0);

// char *init(int ht = 24, int wd, char bckgrnd);

char *intit(int ht, int wd = 80, int bckgrnd = ' ');

std::string make_plural(size_t ctr, const std::string &word, const std::string &ending = "s") {
    return (ctr > 1) ? word + ending : word;
}

int main() {
    //intit();
    // init(24, 10);
    // init(14, '*');
    std::cout << make_plural(2, "failure") << std::endl;
    std::cout << make_plural(2, "successe") << std::endl;

}