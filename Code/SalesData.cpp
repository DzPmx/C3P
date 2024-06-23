//
// Created by Dz on 24-6-3.
#include "SalesData.h"


inline double SalesData::Average_Price() const {
    if (sold)
        return revenue / sold;
    else
        return 0;
}

SalesData &SalesData::combine(const SalesData &rhi) {
    this->sold += rhi.sold;
    this->revenue += rhi.revenue;
    return *this;
}

std::istream &Read(std::istream &is, SalesData &item) {
    double price = 0;
    is >> item.bookNo >> item.sold >> price;
    item.revenue = price * item.sold;
    return is;
}

std::ostream &Print(std::ostream &os, const SalesData &item) {
    os << item.isbn() << ' ' << item.sold << ' ' << item.revenue << ' ' << item.Average_Price();
    return os;
}

SalesData Add(const SalesData &item1, const SalesData &item2) {
    SalesData temp = item1;
    temp.combine(item2);
    return temp;
}
