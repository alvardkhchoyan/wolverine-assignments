//Implement a calculator using std::map and function pointers

#include <iostream>
#include <map>


int add(int, int);
int sub(int, int);
int mul(int, int);
int _div(int, int);

int main() {
    int num1;
    int num2;
    char op;
    std::cin >> num1 >> op >> num2;
    std::map<char, int (*)(int, int)> calculator;
    calculator['+'] = &add;
    calculator['-'] = &sub;
    calculator['*'] = &mul;
    calculator['/'] = &_div;
    std::cout << num1 << " " << op << " " << num2 << " = " << calculator[op](num1, num2) << std::endl;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int mul(int num1, int num2) {
    return num1 * num2;
}

int _div(int num1, int num2) {
    return num1 / num2;
}

