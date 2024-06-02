//
// Created by Dz on 24-6-2.
//
#include<iostream>

int main() {
    const int v2=0;//底层const
    int v1=v2;  //无
    int *p1=&v1,&r1=v1; //p1无，p2无
    const int *p2=&v2; //底层const
    const int *const p3=&v2,&r2=v2;//顶层const
    //1=v2;
    //r1=5;
    //std::cout<<r1;
    //std::cout<<v2;
   // p1=p2;  //不能通过p1修改p2
    p2=p1; //相当于p2定死了值为P1;

    // p1=p3;
    p2=p3;

}