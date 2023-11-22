#include <iostream>
#include <iomanip>

int main() {


    //std::string str = "qwerty zxcvbn dfghjk";
    //
    //size_t res = str.find("cv");

    //if (res != std::string::npos) {
    //    std::cout << "GOOD! " << res << std::endl;
    //}
    //else {
    //    std::cout << "BAD!" << std::endl;
    //}

    /*std::string str = "qwerty zxcvbn";

    std::cout << str.substr(3, 7);*/

    //const std::string passwd = "qwerty";
    //std::string data;

    //std::cout << "Enter password: ";
    //std::cin >> data;

    ////if (passwd == data) {
    //if (passwd.compare(data) == 0) {
    //    std::cout << "Good!\n";
    //}
    //else {
    //    std::cout << "Bad!\n";
    //}

    // 'a' - character, symbol
    // "qwerty" - string

    /*for (int i = 0; i < str.size(); i++) {
        std::cout << str[i] << std::endl;
    }*/

    /*int arr[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = i + j;
        }
    }*/
    // [0][0] [0][1] [0][2] | [1][0] [1][1] [1][2] | [2][0] [2][1] [2][2]

    //int* ptr = &arr[0][0];

    //for (int i = 0; i < 9; i++) {
    //    std::cout << (ptr + i) << " : " << *(ptr + i) << std::endl;
    //}
    

    /*int arr[5][5][5];

    for (int c = 0; c < 5; c++) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                arr[i][j][c] = i + j + c;
            }
        }
    }

    for (int c = 0; c < 5; c++) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                std::cout << std::setw(2) << arr[i][j][c] << ' ';
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        std::cout << std::endl;
    }*/

    //int arr[3][5];
    /*{
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
    };*/

    /*for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = i + j;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }*/


    //const int arr_size = 30;

    //int* arr = new int[arr_size];

    //for (int i = 0; i < arr_size; i++) {
    //    // arr[i] = i + 1;
    //    *(arr + i) = i + 1;
    //}

    //for (int i = 0; i < arr_size; i++) {
    //    std::cout << arr[i] << std::endl;
    //}

    //delete[] arr;

    //int a = 10;

    //int* ptr = new int(10);

    ////*ptr = 10;

    //std::cout << ptr << std::endl;
    //std::cout << *ptr << std::endl;

    //delete ptr;

    //const int arr_size = 30;

    //int arr[arr_size];
    //int a;

    ////for (int i = 0; i < arr_size; i++) {
    ////    std::cout << "Address of element: 0x" << &arr[i] << std::endl;
    ////}

    //for (int i = 0; i < arr_size; ++i) {
    //    arr[i] = i + 1;
    //}

    //for (int i = 0; i < arr_size; i++) {
    //    //std::cout << "index: " << i << " value: " << *(&arr[0] + i) << std::endl;
    //    std::cout << "index: " << i << " value: " << *(arr + i) << std::endl;
    //}

    return 0;
}