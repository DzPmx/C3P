//
// Created by Dz on 24-6-4.
//

#include"iostream"
#include"string"

int main() {
    std::string str ="Hello,World";

    // for (auto &value: str) {
    //     value='X';
    // }

    // for (decltype(str.size()) i = 0; i < str.size(); ++i) {
    //     str[i]='X';
    // }

    // decltype(str.size())i=0;
    // while (i<str.size()) {
    //     str[i]='X';
    //     ++i;
    // }
    //

    std::string output;
    for (auto value: str) {
        if (!std::ispunct(value))
            output+=value;
        else
            output+=' ';
    }
    std::cout<<output;
}