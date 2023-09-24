#include <iostream>

int sum(int a, int b) {
    return a + b;
}

// sub -, _div /, mul *

int sub(int a, int b) {
    return a - b;
}

int _div(int a, int b) {
    if (b == 0) 
        return -1;

    return a / b;
}

int mul(int a, int b) {
    return a * b;
}

int main() {

    std::cout << mul(3, 2) << std::endl;

    int a, b, r;

    // mov - move
    // add - +
    // sub - -

    // Syntax: AT&T or INTEL
    _asm {
        mov a, 10
        mov b, 11

        mov eax, 0

        add eax, a
        add eax, b

        mov r, eax
    }

    std::cout << r << std::endl;

    return 0;
}