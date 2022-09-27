//toUpperCase(s); վերադարձնում է տողը բոլոր տառերը մեծատառ փոխված

#include <iostream>
#include <string>

void toUpperCase(std::string&);

int main() {
    std::string str = "hello";
    toUpperCase(str);
    std::cout << str << std::endl;
}

void toUpperCase(std::string& str) {
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}
