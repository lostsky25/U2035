#include <iostream>
#include <iomanip>

//int sum(int a, int b) {
//    return a + b;
//}

// тип_данных имя_функции(параметры) {
    // тело функции
// }

void showMessage() {
    std::cout << "MSG\n";
    return;
}

void showMessage(int id) {
    std::cout << __FUNCTION__ << ": " << &id << std::endl;
    std::cout << id << ": MSG\n";
    return;
}

int showMessage(int id, std::string msg) {
    std::cout << __FUNCTION__ << ": " << &id << std::endl;
    std::cout << id << ": " << msg << std::endl;

    return id;
}

//int inc(int a) {
//    return a + 1;
//}

void inc(int* ptr) {
    *ptr += 1;
}

bool checkEven(int num) {
    if (num % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool checkOdd(int num) {
    if (num % 2 == 1) {
        return true;
    }
    else {
        return false;
    }
}

int max(int a, int b, int c) {
    return std::max(std::max(a, b), c);
    //int d;
    //if (a > b) {
    //    d = a;
    //}
    //else {
    //    d = b;
    //}

    //if (d > c) {
    //    return d;
    //}
    //else {
    //    return c;
    //}
}

// STACK

// ret adrress

//void rec() {
//    rec();
//}

//unsigned long long factorial(int n) {
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    else {
//        return n * factorial(n - 1);
//    }
//}

// 1 * 2 * 3 * ... * n

//unsigned long long factorial(int n) {
//    unsigned long long res = 1;
//
//    for (int i = 2; i <= n; i++) {
//        res *= i;
//    }
//
//    return res;
//}

//size_t len(std::string str) {
//    return str.size();
//}

//int sum(const int* arr, int size) {
//    int res = 0;
//
//    for (int i = 0; i < size; i++) {
//        res += arr[i];
//    }
//
//    return res;
//}

int main() {
    //int arr[10];

    //for (int i = 0; i < 10; i++) {
    //    arr[i] = i * i;
    //}

    //std::cout << sum(arr, 10) << std::endl;

    //std::string str = "qwerty";

    //std::cout << len(str) << std::endl;

    /*for (unsigned long long i = 0; i < 20; i++) {
        std::cout << factorial(i) << std::endl;
    }*/

    /*for (unsigned long long i = 0; i < 20; i++) {
        std::cout << factorial(i) << std::endl;
    }*/

    // 5! = 1 * 2 * 3 * 4 * 5
    // n! = n*(n - 1)!

    //int a = 9;

    //std::cout << max(1, 2, 3) << std::endl;
    //std::cout << max(3, 3, 3) << std::endl;

    //int id = 1;
    //std::cout << __FUNCTION__ << ": " << &id << std::endl;

    //showMessage();
    //showMessage(1);
    //showMessage(id, "Some text\n");

    return 0;
}