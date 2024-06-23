//
// Created by Dz on 24-6-23.
//

#include <vector>
class NoDefault {
public:
    explicit NoDefault(int a) : a(a){};

private:
    int a;
};

class C {
public:
    explicit C() : ndf(0){};

private:
    NoDefault ndf{5};
};

int main() {
    C myc;
    std::vector<NoDefault> vec(20,NoDefault(20));
    std::vector<C> vecc{20,C{}};
}