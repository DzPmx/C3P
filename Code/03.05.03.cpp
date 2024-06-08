//
// Created by Dz on 24-6-8.
//
#include "iostream"

int main() {
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    for (int i = 0; i < 5; ++i) {
        *(p+i)=0;
    }
    for (const auto arr1: arr) {
        std::cout << arr1;
    }

}