//Implement loops without using loops

#include <iostream>

int main() {
    int num;
    std::cin >> num;
loop:
    if (num) {
        std::cout << num << " ";
        --num;
        goto loop;
    }
}
