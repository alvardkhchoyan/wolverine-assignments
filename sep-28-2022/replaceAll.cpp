//replaceAll(s, t, r); վերադարձնում է s տողի փոփոխված տարբերակը, որտեղ յուրաքանչյուր հանդիպած t ենթատող փոխարինվել է r ենթատողով, օրինակ՝ replaceAll("hello, world", "l", "ch"); կվերադարձնի "hechcho, worchd"։

#include <iostream>
#include <string>
#include <algorithm>

void replaceAll(std::string&, const std::string&, const std::string&);

int main() {
    std::string str = "hello, world";
    std::string substring1 = "l";
    std::string substring2 = "ch";
    replaceAll(str, substring1, substring2);
    std::cout << str << std::endl;
}

void replaceAll(std::string& str, const std::string& substring1, const std::string& substring2) {
    int i = 0;
    while (i < str.size()) {
        int index = str.find(substring1);
        if (index != std::string::npos) {
            str.replace(index, 1, substring2);
            i = index;
        }
        ++i;
    }
}
