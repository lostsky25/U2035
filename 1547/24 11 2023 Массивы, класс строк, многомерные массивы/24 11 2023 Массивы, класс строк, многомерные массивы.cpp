#include <iostream>
#include <iomanip>

int main() {

    //const int rows = 3;
    //const int columns = 5;

    //int** arr = new int*[rows];

    //for (int i = 0; i < rows; i++) {
    //    arr[i] = new int[columns];
    //}

    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < columns; j++) {
    //        arr[i][j] = i + j;
    //    }
    //}

    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < columns; j++) {
    //        std::cout << arr[i][j] << ' ';
    //    }
    //    std::cout << std::endl;
    //}

    //for (int i = 0; i < rows; i++) {
    //    delete[] arr[i];
    //}

    delete[] arr;

    //const int rows = 3;
    //const int columns = 5;

    //int arr[rows][columns];
    /*= {
        {1, 2, 3, 1, 2},
        {4, 5, 6, 1, 2},
        {7, 8, 9, 1, 2}
    };*/

    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < columns; j++) {
    //        arr[i][j] = i + j;
    //    }
    //}

    //int* ptr = &arr[0][0];

    //for (int i = 0; i < rows * columns; i++) {
    //    std::cout << ptr + i << " | " << *(ptr + i) << std::endl;
    //}

    /*for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << std::setw(2) << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }*/

    //const int rows = 3;
    //const int columns = 5;
    //const int z = 10;

    //int arr[rows][columns][z];
    ///*= {
    //    {1, 2, 3, 1, 2},
    //    {4, 5, 6, 1, 2},
    //    {7, 8, 9, 1, 2}
    //};*/

    //for (int c = 0; c < z; c++) {
    //    for (int i = 0; i < rows; i++) {
    //        for (int j = 0; j < columns; j++) {
    //            arr[i][j][c] = i + j + c;
    //        }
    //    }
    //}

    //for (int c = 0; c < z; c++) {
    //    for (int i = 0; i < rows; i++) {
    //        for (int j = 0; j < columns; j++) {
    //            std::cout << std::setw(2) << arr[i][j][c] << ' ';
    //        }
    //        std::cout << std::endl;
    //    }
    //    std::cout << std::endl;
    //    std::cout << std::endl;
    //}

    //while (true) {
    //    int* ptr = new int;
    //    delete ptr;
    //}

    /*const int sz = 10;

    int* arr = new int[sz];

    for (int i = 0; i < sz; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < sz; i++) {
        std::cout << arr[i] << std::endl;
    }

    delete[] arr;*/

    //int* ptr = new int(10);
    // *ptr = 10;

    //std::cout << "Address: " << ptr << std::endl;
    //std::cout << "Value: " << *ptr << std::endl;

    //delete ptr;

    /*int a = 10;*/

    // x86_32 - 32 bit - 4 bytes (pointer size - 4 bytes)
    // x86_64 - 64 bit - 8 bytes (pointer size - 8 bytes)

    //           HEX   OCT     BIN
    // 1 byte - 0xFF - 255 - 11111111

    //std::cout << "sizeof a: " << sizeof(a) << " bytes\n";
    //std::cout << "Address of a: " << &a << '\n';

    //int* ptr_a = &a;

    //std::cout << "\nptr_a: " << ptr_a << std::endl;
    //std::cout << "*ptr_a: " << *ptr_a << std::endl;

    return 0;
}