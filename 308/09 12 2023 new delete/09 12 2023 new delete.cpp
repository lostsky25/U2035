#include <iostream>

//int* our_realloc(int* arr, size_t old_size, size_t new_size, int v) {
//    arr = (int*)realloc(arr, new_size * sizeof(int));
//
//    for (size_t i = old_size; i < new_size; ++i) {
//        *(arr + i) = 0;
//    }
//
//    return arr;
//}

//void fill2dArray(int** arr, const int rows, const int cols, int v) {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            arr[i][j] = v;
//        }
//    }
//}
//
//void print2dArray(int** arr, const int rows, const int cols) {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            std::cout << arr[i][j] << ' ';
//        }
//        std::cout << std::endl;
//    }
//}
//
//void free2dArray(int** arr, const int rows) {
//    for (int i = 0; i < rows; i++) {
//        delete[] arr[i];
//    }
//
//    delete[] arr;
//}

//struct Point {
//    Point() {
//        std::cout << "Constructor\n";
//    }
//
//    int x;
//    int y;
//};

int main() {
    /*Point* p1 = new Point;

    p1->x = 1;
    p1->y = 1;

    std::cout << "x: " << p1->x << " y: " << p1->y << std::endl;

    delete p1;*/

    //const int rows = 5;
    //const int cols = 3;

    //int** arr = new int* [rows];

    //for (int i = 0; i < rows; ++i) {
    //    arr[i] = new int[cols];
    //}

    //fill2dArray(arr, rows, cols, 0);

    //print2dArray(arr, rows, cols);

    //free2dArray(arr, rows);

    //int arr[5][3];

    //for (int i = 0; i < 5; ++i) {
    //    for (int j = 0; j < 3; ++j) {
    //        arr[i][j] = i + j;
    //        std::cout << arr[i][j] << ' ';
    //    }
    //    std::cout << std::endl;
    //}

    //while (true) {
    //    int* ptr = new int;
    //    // delete ptr;
    //}

    //const int n = 10;

    //int* ptr = (int*)malloc(n * sizeof(int));

    //if (ptr == nullptr) {
    //    return 1;
    //}

    //for (size_t i = 0; i < n; i++)
    //    *(ptr + i) = i + 1;

    //for (size_t i = 0; i < n; i++)
    //    std::cout << *(ptr + i) << ' ';
    //std::cout << std::endl;

    // ========================================
    // =============REALLOC====================
    // ========================================

    //ptr = (int*)our_realloc(ptr, n, (n + 5), 1);

    //if (ptr == nullptr) {
    //    return 1;
    //}

    //for (size_t i = 0; i < (n + 5); i++)
    //    std::cout << *(ptr + i) << ' ';

    //free(ptr);

    // int* ptr = new int[n];

    //int* ptr = (int*)malloc(n * sizeof(int));
    ////int* ptr = (int*)calloc(n, sizeof(int));

    //for (size_t i = 0; i < 20; i++)
    //    *(ptr + i) = i + 1;


    //for (size_t i = 0; i < 20; i++)
    //    std::cout << *(ptr + i) << ' ';

    //free(ptr);

    // delete ptr;

    /*std::cout << sizeof(int*) << std::endl;
    std::cout << sizeof(char*) << std::endl;

    std::cout << std::endl << sizeof(char) << std::endl;
    std::cout << sizeof(int) << std::endl;*/


    return 0;
}