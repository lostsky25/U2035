#include <iostream>
#include <vector>

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
//    if (b == 0) {
//        std::cout << "Error: Division by zero.\n";
//        return -1;
//    }
//    else {
//        return a / b;
//    }
//}

// _div

int main() {

    std::vector<int> arr;

    // 98
    // arr[i]
    // arr[i] == 98

    for (int i = 0; i < 100; ++i) {
        arr.push_back(i + 10);
    }
    
    int target = 98;

    int l = 0;
    int r = arr.size() - 1;
    int m;

    while (r - l > 1) {
        m = (r + l) / 2;

        if (arr[m] <= target) {
            l = m;
        }
        else {
            r = m;
        }
    }

    if (arr[l] == target) {
        std::cout << "index: " << l << " arr[l]: " << arr[l] << std::endl;
    }
    else {
        std::cout << "Not found.\n";
    }
    
    //for (int i = 0; i < arr.size(); ++i) {
    //    if (arr[i] == 98) {
    //        std::cout << i;
    //        break;
    //    }
    //}

    //int a = 10;
    //int b = 20;
    //
    //std::cout << sum(a, b);

    //std::vector<int> arr;
    //// 0 1 2 .... 9
    //for (int i = 0; i < 10; i++) {
    //    arr.push_back(i + 1);
    //}

    //for (int i = 0; i < arr.size(); i++) {
    //    std::cout << arr[i] << ' ';
    //}

    //std::cout << "Size: " << arr.size() << std::endl;
	
    return 0;
}