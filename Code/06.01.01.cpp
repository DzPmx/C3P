//
// Created by Dz on 24-6-12.
//

#include <iostream>
#include <string>
void example() {
    static int a=0;
    std::cout << a++;
}

int main() {
    example();
    example();
    example();

}