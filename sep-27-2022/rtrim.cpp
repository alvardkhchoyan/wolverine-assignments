//rtrim(s): վերադարձնում է տողը առանց աջից բացատների, այսինքն rtrim("hello   "); կվերադարձնի "hello"

#include <algorithm>
#include <iostream>
#include <string>

void rtrim(std::string&);

int main() {
    std::string str = "     hello   ";
    rtrim(str);
    std::cout << str << std::endl;
}

void rtrim(std::string& str) {
    bool flag = false;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == ' ' && flag == true) {
            str.erase(i, str.size() - 1);
            return;
        }
        flag = (str[i] != ' ' && flag == false);
    }
}
