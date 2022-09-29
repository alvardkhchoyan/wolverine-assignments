#include <iostream>
#include <map>

enum class Colors {Red, Green, Blue, Black};
std::map<Colors, std::string> color_num;
std::map<std::string, Colors> color_name;

Colors toEnum(std::string str) {
    return color_name[str];
}

std::string toString(Colors num) {
    return color_num[num];
}

int main() {
    color_num[Colors::Red] = "Red";
    color_num[Colors::Green] = "Green";
    color_num[Colors::Blue] = "Blue";
    color_num[Colors::Black] = "Black";
    color_name["Red"] = Colors::Red;
    color_name["Green"] = Colors::Green;
    color_name["Blue"] = Colors::Blue;
    color_name["Black"] = Colors::Black;

    std::cout << toString(Colors::Red) << std::endl;
    std::cout << static_cast<int>(toEnum("Red")) << std::endl;
}

