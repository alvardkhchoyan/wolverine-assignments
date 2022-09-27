//startsWith(s, t); վերադարձնում է true, եթե s տողը սկսվում է t ենթատողով, օրինակ՝ startsWith("hello, world", "hell"); վերադարձնում է true, իսկ startsWith("hello, world", "world"); վերադարձնում է false։

#include <iostream>
#include <string>

bool startsWith(const std::string&, const std::string&);

int main() {
    std::string str = "hello, world";
    std::string substring = "hello";
    std::cout << startsWith(str, substring) << std::endl;
}


bool startsWith(const std::string& str, const std::string& substring) {
    return (str.substr(0, substring.size()) == substring);
}
