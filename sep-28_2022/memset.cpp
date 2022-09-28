#include <iostream>

void memset(char*, char, size_t);

int main() {
    char arr[] = "hello";
    char val = 'a';
    size_t count = 3;
    memset(arr, val, count);
    std::cout << arr;
}

void memset(char* arr, char val, size_t count) {
    while (count--) {
        *arr = val;
        ++arr;
    }
}
