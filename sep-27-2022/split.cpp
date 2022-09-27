//split(s, d); : կվերադարձնի տողերի զանգված, որտեղ յուրաքանչյուր տող ստացվել է s տողը կտրտելով ըստ տրված d բաժանիչների, այսինքն՝ split("he,ll,o", ","); կվերադարձնի ["he", "ll", "o"], իսկ split("he ,ll:o world,vui", " ,:"); կվերադարձնի ["he", "ll", "o", "world", "vui"]։ Փոխանցվող բաժանիչների քանակի սահմանափակում չկա։

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(std::string, std::string);

int main() {
    std::string str = "he,ll,o";
    std::string st = ",";
    std::vector<std::string> vec = split(str, st);
    for (auto i: vec) {
        std::cout << i << "  ";
    }
}


std::vector<std::string> split(std::string str, std::string st) {
    std::string line = "";
    std::vector <std::string> vec;
    int j = 0;
    for (int i = 0; i < str.size(); ++i) {
        line += str[i];
        j = 0;
        while (j < st.size()) {
            if (str[i] == st[j]) {
                line.pop_back();
                vec.push_back(line);
                line = "";
                break;
            }
            else if (i == str.size() - 1) {
                vec.push_back(line);
                line = "";
                break;

            }
            ++j;
        }
    }
    return  vec;
}
