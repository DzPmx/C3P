//
// Created by Dz on 24-6-23.
//

#include <string>
class Account {
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static auto rate(double rate) -> void;

private:
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate();
};
void Account::rate(const double rate) {
    interestRate = rate;
}

//double Account ::interestRate=Account::initRate();


int main() {
    double r = Account::rate();
    Account ac1;
    Account *ac2 = &ac1;
    r = ac1.rate();
    r = ac2->rate();
}