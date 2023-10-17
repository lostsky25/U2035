#include <iostream>

//void passFunc1(int a[][10]) {
//    for (int i = 0; i < 10; i++) {
//        for (int j = 0; j < 10; j++) {
//            std::cout << a[i][j] << ' ';
//        }
//        std::cout << std::endl;
//    }
//}
//
//void passFunc2(int* b[10]) {
//    for (int i = 0; i < 10; i++) {
//        for (int j = 0; j < 10; j++) {
//            std::cout << b[i][j] << ' ';
//        }
//        std::cout << std::endl;
//    }
//}
//
//void passFunc3(int** c) {
//    for (int i = 0; i < 10; i++) {
//        for (int j = 0; j < 10; j++) {
//            std::cout << c[i][j] << ' ';
//        }
//        std::cout << std::endl;
//    }
//}

int foo(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    int result = foo(a,b,c,d);
    /*int a[10][10];
    int* b[10];

    for (int i = 0; i < 10; i++) {
        b[i] = new int[10];
    }

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++){
            a[i][j] = i + j;
            b[i][j] = i + j + 1;
        }

    passFunc2(b);*/

    return 0;
}
