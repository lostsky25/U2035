#include <iostream>
#include <vector>

void showMessage(void) {
    std::cout << "MSG\n";
}

//void showMessage(int id) {
//    std::cout << id << ": MSG\n";
//}
//
//void showMessage(int id, std::string msg) {
//    std::cout << id << ": " << msg << std::endl;
//}
//
//int showMessage(int id, std::string msg, bool newLine) {
//    std::cout << id << ": " << msg << newLine ? '\n' : '.';
//    return id;
//}

//int getSum(int a, int b) {
//    return a + b;
//}

//void printSum(int a, int b) {
//    std::cout << a << '+' << b << '=' << a + b << std::endl;
//}

//void foo() {
//    std::cout << "Hello\n";
//
//    return;
//    std::cout << "World\n";
//}

//int inc(int value) {
//    return ++value;
//}

//void fill(int* arr, const int size, int value) {
//    for (int i = 0; i < size; i++) {
//        //arr[i] = value;
//        *(arr + i) = value;
//    }
//}

//void inc(int& a) {
//    ++a;
//}

//void fill(std::vector<int>& arr, int value) {
//    for (int i = 0; i < arr.size(); i++) {
//        arr[i] = value;
//        std::cout << __FUNCTION__ << ": " << &arr[i] << std::endl;
//    }
//}

//void reverse(std::string& data) {
//    //std::string str;
//
//    //for (int i = data.size() - 1; i >= 0; --i) {
//    //    str.push_back(data[i]);
//    //}
//    //data = str;
//
//    //for (int i = 0; i < data.size() / 2; i++) {
//    //    std::swap(data[i], data[data.size() - i - 1]);
//    //}
//}

//struct Point {
//    int x;
//    int y;
//    int z;
//};
//
//Point getPostion() {
//    // ...
//}

int main() {


    //Point p1 = { 1, 2, 3 };
    //Point p2 = { 2, 3, 4 };
    //Point p3 = { 3, 4, 5 };

    //std::cout << "P1\n";
    //std::cout << p1.x << ' ' << p1.y << ' ' << p1.z << std::endl;
    //std::cout << "P2\n";
    //std::cout << p2.x << ' ' << p2.y << ' ' << p2.z << std::endl;
    //std::cout << "P3\n";
    //std::cout << p3.x << ' ' << p3.y << ' ' << p3.z << std::endl;
    
    /*std::string str = "qwerty";

    reverse(str);

    std::cout << str << std::endl;*/

    /*std::vector<int> data;

    for (int i = 0; i < 10; i++) {
        data.push_back(i);
    }

    fill(data, 10);

    for (int i = 0; i < data.size(); i++) {
        std::cout << data[i] << ' ';
    }

    std::cout << std::endl << std::endl;

    for (int i = 0; i < data.size(); i++) {
        std::cout << __FUNCTION__ << ": " << &data[i] << std::endl;
    }*/


    /*int a = 10;
    
    inc(a);

    std::cout << a << std::endl;*/

    //int* ptr_a = &a;

    //int& ref_a = a;

    //ref_a = 20;

    //std::cout << a << std::endl;

    /*const int size = 10;
    int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    fill(arr, size, 5);

    for (auto el : arr) {
        std::cout << el << ' ';
    }*/

    //std::cout << inc(1) << std::endl;

    //int a = 0;
    //std::cout << ++a << std::endl;
    //std::cout << a << std::endl;

    //void (*ptr)(void) = showMessage;

    //std::cout << showMessage << std::endl;
    //std::cout << ptr << std::endl;

    //ptr();

    /*showMessage();
    showMessage(1);
    showMessage(2, "Some text!", true);*/

    return 0;
}