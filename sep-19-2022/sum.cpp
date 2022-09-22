//Գրել ծրագիր, որը կգտնի զանգվածի տարրերի գումարը։

#include <iostream>

int main() {
    int arr[3] = {1, 2, 3};
    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        sum = sum + arr[i];
    }
}

/*


    push rbp
    mov ebp, rsp
    mov DWORD PTR[rbp - 20], 1      //arr[0]
    mov DWORD PTR[rbp - 16], 2      //arr[1]
    mov DWORD PTR[rbp - 12], 3      //arr[2]
    mov DWORD PTR[rbp - 4], 0       //int sum = 0
    MOV DWORD PTR[rbp - 8], 0       //int i = 0
    jmp loop
loop2:
    mov rax, DWORD PTR[rbp - 8]
    mov eax, DWORD PTR[rbp-20+rax*4]
    add DWORD PTR[rbp - 4], eax
    add rax, 1
loop1:
    cmp rax, 2
    jle loop2
    mov eax, 0
    pop rbp
    ret


*/
