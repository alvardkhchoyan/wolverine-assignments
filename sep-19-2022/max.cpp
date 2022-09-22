//Գրել ծրագիրը, որը կգտնի երկու փոփոխականների մաքսիմումը։

#include <iostream>

int main() {
    int num1 = 5;
    int num2 = 7;
    int max;
    if (num1 > num2) {
        max = num1;
    }
    else {
        max = num2;
    }
}

/*

    push rbp
    mov rbp, rsp
    mov DWORD PTR[rbp - 4], 5
    mov DWORD PTR[rbp - 8], 7
    mov eax, DWORD PTR[rbp - 4]
    cmp eax, DWORD PTR[rbp - 8]
    jle loop1
    mov eax, DWORD PTR[rbp - 4]
    mov DWORD PTR[rbp - 12], eax
    jmp loop2
loop1:
    mov eax, DWORD PTR[rbp - 8]
    mov DWORD PTR[rbp - 12], eax
loop2:
    mov eax, 0
    pop rbp
    ret

*/
