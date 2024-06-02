//
// Created by Dz on 24-6-2.
//

#include <iostream>
#include <string>
#include "SalesData.h"

int main() {
    SalesData data1, data2;
    double price = 0;
    std::cin >> data1.bookNo >> data1.soldNumber >> price;
    data1.revenue = data1.soldNumber * price;

    std::cin >> data2.bookNo >> data2.soldNumber >> price;
    data2.revenue = data2.soldNumber * price;
    if (data1.bookNo == data2.bookNo) {
        double totalCnt = data1.soldNumber + data2.soldNumber;
        double totalRevenue = data1.revenue + data2.revenue;
        std::cout << totalCnt << ' ' << totalRevenue << std::endl;

    } else {
        std::cout << "Errors!";
    }
}