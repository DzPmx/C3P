//
// Created by Dz on 24-6-23.
//

#include <string>
#include <vector>
class Example {
public:
    mutable int i;
    static double rate;
    static constexpr int vecSize = 20;
    static std::vector<double> vec;

    int seti(int sb) const {
        i = sb;
    }
};
double Example::rate = 6.5;
const int Example::vecSize;
std::vector<double> Example::vec(vecSize);