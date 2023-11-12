#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

void foo2(int a, int b) {
    std::cout << "a: " << a << " b: " << b << std::endl;
}

void printMsg(const std::string& msg) {
    std::cout << msg << std::endl;
}

int lenOfNumber(int num) {
    int count = 0;

    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    //std::cout << lenOfNumber(123);

    //std::vector<int> data = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    //int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // int - 4 bytes
    // arr - 36 bytes

    //auto print = [](const int& el) {
    //    std::cout << el << ' ';
    //};

    //std::cout << "sizeof(arr): " << sizeof(arr) << std::endl;

    //std::for_each(arr, arr + sizeof(arr) / sizeof(int), print);

    // pointer sizeof x86_64 - 8 bytes
    // pointer sizeof x86_32 - 4 bytes

    /*int* arr2 = new int[20];

    std::cout << sizeof(arr2) << std::endl;*/

    //auto print = [](int& el) {
    //    el *= 2;
    //    std::cout << el << ' ';
    //};

    //std::for_each(data.begin(), data.end(), print);

    //for (auto el : data)
    //    std::cout << el << ' ';


    //int a, b, c, z;
    //a = 10;
    //b = 20;
    //c = 30;
    //z = 10;
    //
    //std::function<int(int, int)> sum = [a, b, &c](int x, int y) {
    //    /*a = 100;
    //    b = 200;*/
    //    c = 300;

    //    return x + y + a + b;
    //};

    //std::cout << sum(10, 20) << std::endl;

    /*std::function<void(const std::string&)> func_obj = printMsg;
    func_obj("qwerty");*/

    //auto lambda_print = [](int n, char symb) {
    //    for (int i = 0; i < n; i++)
    //        std::cout << symb;
    //};

    //int result = [](int a, int b) {
    //    return a + b;
    //}(1, 2);

    //std::cout << typeid(result).name() << std::endl;

    //std::cout << result;

    //auto lambda_sum = [](int a, int b) {
    //    return (float)(a + b);
    //};

    //std::cout << typeid(lambda_sum).name() << std::endl;
    //std::cout << typeid(lambda_sum(10, 20)).name() << std::endl;
    //
    //std::cout << lambda_sum(10, 20);


    //void (*ptr)(int, int) = foo2;

    //foo2(1, 2);
    //ptr(1, 2);
    
    return 0;
}