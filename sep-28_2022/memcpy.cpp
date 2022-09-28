#include <iostream>

void memcpy(char*, char*, size_t);

int main() {
    char arr[] = "hello";
    const int size = 6;
    char arr2[size];
    memcpy(arr, arr2, size);
    std::cout << arr2 << std::endl;
}

void memcpy(char* src, char* dest, size_t count) {
    while (count--) {
        *dest = *src;
        ++dest;
        ++src;
    }
}
