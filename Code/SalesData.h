//
// Created by Dz on 24-6-3.
//

#ifndef SALESDATA_H
#define SALESDATA_H


#include <iostream>
#include <string>

struct SalesData {
    friend SalesData Add(const SalesData &, const SalesData &);
    friend std::istream &Read(std::istream &, SalesData &);
    friend std::ostream &Print(std::ostream &, const SalesData &);

private:
    std::string bookNo;
    unsigned sold = 0;
    double revenue = 0;
    [[nodiscard]] inline double Average_Price() const;

public:
    // SalesData(const std::string &str=" ") : bookNo(str){};
    // SalesData(const std::string &str, const unsigned i, double p) : bookNo(str), sold(i), revenue(p * i){};
    // SalesData() : SalesData(" ", 0, 0){};
    // SalesData(std::istream &is) : SalesData() { Read(is, *this); }
    explicit SalesData(const std::string &str, const unsigned i, double p) : bookNo(str), sold(i), revenue(p * i) { std::cout << "Blank Construct" << std::endl; }
    explicit SalesData() : SalesData(" ", 0, 0) {}
    explicit SalesData(std::istream &is) : SalesData() { Read(is, *this); }
    [[nodiscard]] std::string isbn() const { return bookNo; }
    SalesData &combine(const SalesData &);
};

SalesData Add(const SalesData &, const SalesData &);
std::istream &Read(std::istream &, SalesData &);
std::ostream &Print(std::ostream &, const SalesData &);


#endif//SALESDATA_H
