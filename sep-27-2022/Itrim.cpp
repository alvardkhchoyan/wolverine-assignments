//ltrim(s): վերադարձնում է տողը առանց ձախից բացատների, այսինքն ltrim("   hello"); կվերադարձնի "hello"

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
    for (int i = str.size() - 1; i >= 0; --i) {
        if (str[i] == ' ' && flag == true) {
            str.erase(0, i + 1);
            return;
        }
        flag = (str[i] != ' ' && flag == false);
    }
}
