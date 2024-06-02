//
// Created by Dz on 24-6-2.
//

int main() {
    // int i=0;
    // auto a=i;
    // const int ci=i,&cr=ci;
    // auto b=ci;
    // auto c=cr;
    // auto d=&i;
    // auto e=&ci;
    //
    // const auto f=ci;
    // auto &g=ci;
    //
    // a=42;
    // b=42;
    // c=42;
    // //d=42;
    // //e=42;
    // //f=42;
    // //g=42;


    // const int i=40;
    // auto j=i;
    // const auto &k=i;
    // auto *p=&i;
    // const auto j2=i,&k2=i;

    int i=42;
    int *p=&i;
    int &k=i;
    decltype(*p)c=i;
}