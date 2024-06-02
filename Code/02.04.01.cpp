//
// Created by Dz on 24-6-2.
//

#include <iostream>
int main() {
    //const int buf;
    int cnt=0;
    const int sz=cnt;
    cnt++;
    //sz++;

    int i=42;
    const int &r1=i;
    const int &r3=r1*2;
    std::cout<<i<<std::endl;
    std::cout<<r1<<std::endl;
    std::cout<<r3<<std::endl;
}