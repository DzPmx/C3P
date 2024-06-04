//
// Created by Dz on 24-6-3.
//

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
    // std::string str;
    // std::getline(std::cin,str); //写入string一整行 遇到换行符结束
    // std::cout<<str<<std::endl;
    //
    // std::cin>>str;
    // std::cout<<str<<std::endl;  //写入string一个连续字符串，遇到空格结束

    string str1, str2;

    //cin >> str1 >> str2;
    //输出大的
    // if (str1 != str2) {
    //     cout << (str1>str2?str1:str2);
    // }
    //输出长的
    // if (str1.size() != str2.size()) {
    //     cout << (str1.size() > str2.size()?str1:str2);
    // }

    for (int i = 0; i < 3; ++i) {
        cin>>str1;
        str2+=str1+" ";
}
    cout<<str2;
}