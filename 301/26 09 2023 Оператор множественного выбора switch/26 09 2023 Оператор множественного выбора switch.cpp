#include <iostream>

int foo1() {
    return 1;
}

int foo2() {
    return 2;
}

int foo3() {
    return 3;
}

int findMax(int* arr, int size) {
    // std::cout << "arr (1st element): 0x" << arr << std::endl;

    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {

    int index = 0;

    switch (index)
    {
    case 0:
        std::cout << "case 0" << std::endl;
        break;
    case 1:
        std::cout << "case 1" << std::endl;
        break;
    case 2:
        std::cout << "case 2" << std::endl;
        break;
    default:
        std::cout << "default" << std::endl;
        break;
    }

    /*int a = 10;
    int b = 20;*/

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int max_arr = findMax(arr, 10);

    std::cout << max_arr;

    /*for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    std::cout << "arr (1st element): 0x" << arr << std::endl;
    std::cout << "arr (1st element): 0x" << &arr[0] << std::endl;
    std::cout << "arr (2nd element): 0x" << &arr[1] << std::endl;

    std::cout << "a addr: 0x" << &a << std::endl;
    std::cout << "b addr: 0x" << &b << std::endl;
    
    std::cout << "0x" << foo1 << std::endl;
    std::cout << "0x" << foo2 << std::endl;
    std::cout << "0x" << foo3 << std::endl;*/
    
    return 0;
}