//
// Created by Dz on 24-6-16.
//
#include "iostream"
#include "string"

enum Sex {
    Man = 0,
    Woman = 1,
    Unknow = 2,
};
struct Person {
    friend std::istream &Read(std::istream &is, Person &p);
private:
    std::string name;
    std::string address;
    Sex sex = Sex::Unknow;
    double height = 0;
    double weight = 0;
public:
    Person() = default;
    Person(const std::string &name, const std::string &address) : name(name), address(address){};
    explicit Person(std::istream &is) {
        is >> name >> address;
    }

    [[nodiscard]] std::string Name() const { return this->name; }
    [[nodiscard]] std::string Address() const { return this->address; }
};

std::ostream &Print(std::ostream &os, const Person &p) {
    os << p.Name() << ' ' << p.Address() << std::endl;
    return os;
}

std::istream &Read(std::istream &is, Person &p) {
    is >> p.name >> p.address;
    return is;
}

int main() {
    Person a{std::cin};
    Person b{"Dzpmx", "Shanghai"};
}