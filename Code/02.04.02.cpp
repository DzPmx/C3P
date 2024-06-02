//
// Created by Dz on 24-6-2.
//
int main() {
    // //int i=-1,&r=0;
    // int i2=0,i3=0;
    // int *const p2=&i2;
    // //p2=nullptr; 常量指针不能改变地址
    // const int i=-1,&r=0;
    // const int *const p3=&i2;
    // const int *p1=&i2;
    // p1=&i3;
    // const int *const r2=nullptr;
    // const int i5=0,&ref=i5;
    // //int j,*const cp;

    // int i;
    // const int ic=i;

    //
    // int *p1=nullptr;
    // const int*const p3=nullptr;
    // p1=p3;

     const int ic=5;
    // int *p1=&ic;

    // const int * const p3=&ic;

    int *p1=nullptr;
    int *const p2=p1;

    const int *const p3=nullptr;
    const int ic0=*p3;
}