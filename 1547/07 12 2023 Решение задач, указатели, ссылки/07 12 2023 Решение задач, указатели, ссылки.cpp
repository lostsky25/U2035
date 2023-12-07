#include <iostream>

//void swap(int& x, int& y) {
//    int tmp = x;
//    x = y;
//    y = tmp;
//}
//
//void swap(int* x, int* y) {
//    int tmp = *x;
//    *x = *y;
//    *y = tmp;
//}

//void printlnStr(const char* str) {
//    const char* now = str;
//
//    while (*now != '\0') {
//        std::cout << *now;
//        ++now;
//    }
//    std::cout << std::endl;
//}

//int sum(int a, int b) {
//    return a + b;
//}
//
//int sub(int a, int b) {
//    return a - b;
//}
//
//int mul(int a, int b) {
//    return a * b;
//}
//
//int _div(int a, int b) {
//    return a / b;
//}
//
//void printResult(int a, int b, int(*func)(int, int)) {
//    std::cout << func(a, b);
//}

//void inc_n(int& value, int n) {
//    value += n;
//}

//struct Point {
//    int x;
//    int y;
//};
//
//Point getRandPoint() {
//    Point tmp = { rand() % 100, rand() % 100 };
//    return tmp;
//}

int main() {
    //Point p1 = getRandPoint();

    //std::cout << p1.x << ' ' << p1.y << std::endl;


    //int value = 10;

    //inc_n(value, 20);

    //std::cout << value << std::endl;

    //printResult(10, 20, sum); 
    //std::cout << std::endl;

    //printResult(10, 20, sub); 
    //std::cout << std::endl;

    //printResult(10, 20, mul); 
    //std::cout << std::endl;

    //printResult(10, 20, _div); 
    //std::cout << std::endl;

    //const char* str = "Hello, world!";
    //const char str[] = {'c', 'b', 'a', '\0'};
    
    //printlnStr(str);

    //int* arr = new int[10];

    //for (size_t i = 0; i < 10; i++) {
    //    arr[i] = i + 1;
    //}

    //for (size_t i = 0; i < 10; i++) {
    //    std::cout << *(arr + i) << std::endl;
    //}

    //delete[] arr;

    //int x = 10, y = 20;

    //swap(&x, &y);

    //std::cout << x << ' ' << y << std::endl;

    //int a = 187398274;
    
    //char* ptr = (char*)&a;

    //for (int i = 0; i < 4; ++i) {
    //    std::cout << "0x" << (int*)(ptr + i) << " => " << (int)*(ptr + i) << std::endl;
    //}

    //int arr[] = { 10, 20, 30, 40, 50 };

    //std::cout << typeid(arr).name() << std::endl;

    // int* ptr = arr;

    // *(ptr + 0) -> 10
    // *(ptr + 1) -> 20

    /*for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++) {
        std::cout << *(ptr + i) << std::endl;
    }*/

    return 0;
}
