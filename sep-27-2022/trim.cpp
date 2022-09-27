//trim(s): վերադարձնում է տողը առանց ձախից և աջից բացատների trim("  hello  "); կվերադարձնի "hello"

#include <iostream>
#include <string>

std::string trim(const std::string& str);

int main() {
    std::string str = "  hello  ";
    std::string st = trim(str);
    std::cout << st << std::endl;
}


std::string trim(const std::string& str) {
    std::string st = "";
    int i = 0;
    while (i < str.size()) {
        if (str[i] != ' ') {
            st += str[i];
        }
        ++i;
    }
    return st;
}
