
//
// Created by Dz on 24-6-17.
//


class Y;


class X {
    Y *prtY = nullptr;
};

class Y {
    X obj = {};
};

int main() {
    X x{};
    Y y{};
}