#include <iostream>
#include <iomanip>

void print(int*, int*);
void printArray(int [][10]);
void retFoo(int);
int retIntFoo(int);
std::string genStr(const int);

int foo1(int a) {
    return 1 + a;
}

int foo2(int a) {
    return 2 + a;
}

int foo3(int a) {
    return 3 + a;
}

//int comp(int a, int b) {
//    if (a > b) {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//
//int foo4(int a, int b, int(*comp)(int, int)) {
//    return comp(a, b);
//}

int main() {
    //std::cout << foo4(10, 12, comp) << std::endl;

    //std::cout << "Function address: " << genStr << std::endl;

    //int (*ptr_func)(int);

    //ptr_func = foo1;
    //ptr_func(10);

    //ptr_func = foo2;
    //ptr_func(10);
    //
    //ptr_func = foo3;
    //ptr_func(10);
    
    /*for (int i = 1; i <= 30; i++) {
        std::cout << genStr(i) << std::endl;
    }*/

    //std::cout << retIntFoo(-10) << std::endl;

    //retFoo(10);

    //int arr[10][10];
    //for (int i = 0; i < 10; i++) {
    //    for (int j = 0; j < 10; j++) {
    //        arr[i][j] = i + j + 1;
    //    }
    //}

    //printArray(arr);
    //int a = 1, b = 2;

    //print(&a, &b);
    //std::cout << __FUNCTION__ << " a = " << a << std::endl;

    return 0;
}

std::string genStr(const int len) {
    std::string str;
    const int min = 33;
    const int max = 126;

    srand((int)clock());

    for (int i = 0; i < len; i++) {
        str.push_back(min + (rand() % (max - min + 1)));
    }

    return str;
}

int retIntFoo(int a) {
    if (a > 0) {
        return a + 1;
    }
    else {
        return a - 1;
    }
}

void retFoo(int a) {
    if (a > 0) {
        return;
    }
    else {
        return;
    }

    std::cout << a << std::endl;
}

void print(int* ptr_a, int* ptr_b) {
    *ptr_a = 10;
    std::cout << "a: " << *ptr_a << " b: " << *ptr_b << std::endl;
}

void printArray(int arr[][10]) {
    for (int i = 0; i < 10; i++) {
        int sum = 0;
        for (int j = 0; j < 10; j++) {
            sum += arr[i][j];
            std::cout << std::setw(2) << arr[i][j] << ' ';
        }

        std::cout << " sum: " << sum << std::endl;
    }
}