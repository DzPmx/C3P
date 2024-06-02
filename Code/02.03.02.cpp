//
// Created by Dz on 24-6-2.
//
#include<iostream>
int main() {
    // int i=5,j=7,*pi=&i;
    // std::cout<<pi<<std::endl;   //pi存储的地址
    // std::cout<<*pi<<std::endl;  //pi存储地址指向的值
    // pi=&j;                      //修改pi存储的地址
    // std::cout<<pi<<std::endl;
    // *pi=10;                     //修改pi存储地址指向的值
    // std::cout<<pi<<std::endl;   //pi存储的地址不变
    // std::cout<<*pi<<std::endl;   //pi存储地址指向的值为10
    // std::cout<<j<<std::endl;
    // std::cout<<&j<<std::endl;  //pi存储地址指向的值

    // int i=40;
    // int *p1=&i;
    // *p1*=*p1;
    // std::cout<<*p1;

    int i=0;
    //double* dp=&i;
    //int *pi=i;
    int *p=&i;

    //
    int *k=&i;
    if (k) {
        //k为实际存储的地址，始终有值
    }
    if (*k) {
        //*k为存储地址指向的值，为0
    }
}