//endsWith(s, t); վերադարձնում է true, եթե s տողը վերջանում է t ենթատողով

#include <iostream>
#include <string>
#include <algorithm>

bool endsWith(std::string&, std::string&);

int main() {
    std::string str = "hello, world";
    std::string substring = "orld";
    std::cout << endsWith(str, substring) << std::endl;
}

bool endsWith(std::string& str, std::string& substring) {
    return (str.substr(str.size() - substring.size(), str.size() - 1) == substring);
}
