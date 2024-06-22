#include <iostream>

// 在类外部定义友元函数
void f() {
    std::cout << "friend f";
}


struct X {
    friend void f();// 在类内部声明友元函数

    X() {
        f();
    }
};


int main() {
    X x;
    return 0;
}