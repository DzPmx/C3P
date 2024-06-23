//
// Created by Dz on 24-6-23.
//

#include <string>

struct SalesData {
    std::string bookNo;
    unsigned sold = 0;
    double revenue = 0.0;
};

int main() {
    SalesData s = {"dzpmx", 5, 12.25};
    SalesData y{"dzpmx", 15, 2.2};
}