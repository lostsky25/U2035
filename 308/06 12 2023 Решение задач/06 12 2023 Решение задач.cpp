#include <iostream>

//void swap(int& a, int& b) {
//    int tmp = a;
//    a = b;
//    b = tmp;
//}

//С++ использует новые методы работы с динамической памятью при помощи операторов new и delete:

//new — для выделения памяти;
//delete — для освобождения памяти. delete[] - если массив.
//Оператор new используется в следующих формах :

//new тип; — для переменных
//new тип[размер]; — для массивов

//int sum(int a, int b) {
//    return a + b;
//}
//
//int sub(int a, int b) {
//    return a - b;
//}
//
//void printlnResult(int a, int b, int(*func)(int, int)) {
//    std::cout << func(a, b) << std::endl;
//}

//void inc_n(int& value, int n) {
//    value += n;
//}

int main() {

    //int a = 10;
    //inc_n(a, 20);

    //std::cout << a << std::endl;

    // ptr_func(10, 20);

    //printlnResult(10, 20, sum);
    //printlnResult(10, 20, sub);

    //int a = 10;
    //int b = 10;

    //int* const ptr = &a;
    //*ptr = 12312;
    //ptr = &b;

    //const char* s = "wqerty";
    //const char* now = s;

    //std::cout << "s: " << (int*)s << std::endl;
    //std::cout << "now: " << (int*)now << std::endl;

    //while (*now != '\0') {
    //    std::cout << *now << std::endl;
    //    ++now;
    //}

    //std::cout << "s: " << (int*)s << std::endl;
    //std::cout << "now: " << (int*)now << std::endl;

    //int* arr = new int[10];

    //for (int i = 0; i < 10; ++i) {
    //    arr[i] = i;
    //}

    //// std::cout << arr + 0 -> 0
    //// std::cout << arr + 1 -> 1
    //// ...

    //for (int i = 0; i < 10; ++i) {
    //    std::cout << *(arr + i) << std::endl;
    //}

    //delete[] arr;


    /*int a = 10, b = 20;

    swap(a, b);

    std::cout << a << ' ' << b << std::endl;*/

    // &, *

    //int nums[] = { 1, 2, 3, 4, 5, 6 };
    //int* ptr = &nums[0]; // = nums;

    //for (int i = 0; i < 6; ++i) {
    //    std::cout << *(ptr + i) << std::endl;
    //}

    return 0;
}