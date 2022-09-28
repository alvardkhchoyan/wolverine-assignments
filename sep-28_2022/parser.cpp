#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

void read(const std::string&);

int main() {
    std::string line;
    std::string pass;
    std::ifstream myfile ("test.fasm");
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            read(line);
        }
        myfile.close();
    }
}


void read(const std::string& line) {
    int i = 0;
    std::ofstream add("newtest.fasm", std::ios::app);
    if (add.is_open()) {
        std::string str = "";
        while (line[i] == ' ') {++i;}
        while (line[i] != ' ') {
            str += line[i];
            ++i;
        }
        add << str << std::endl;
        str = "";
        while (line[i] == ' ') {++i;}
        while (line[i] != ' ' && line[i] != ',') {
            str += line[i];
            ++i;
        }
        add << str << std::endl;
        str = "";
        while (line[i] == ' ' || line[i] == ',') {++i;}
        while (i < line.length()) {
            str += line[i];
            ++i;
        }
        add << str << std::endl;
        add.close ();
    }
}
