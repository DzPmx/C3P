//
// Created by Dz on 24-6-22.
//
#include "string"

typedef std::string Type;
Type initVal();
class Exercise {
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal();

private:
    double val = 0;
};

Exercise::Type Exercise::setVal(Type parm) {
    val = parm + initVal();
    return val;
}
