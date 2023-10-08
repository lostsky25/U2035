#include <iostream>
#include <vector>
#include <chrono>

#define SIZE 10000000

int main() {
    std::vector<int> arr;

    for (int i = 0; i < SIZE; i++) {
        arr.push_back(i);
    }

    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    //for (int i = 0; i < SIZE; i++) {
    //    if (arr[i] == SIZE - 2) {
    //        std::cout << i;
    //        break;
    //    }
    //}
    
    int l = 0;
    int r = arr.size();
    int m = 0;

    int target = SIZE - 2;

    while (r - l > 1) {
        m = (l + r) / 2;

        if (arr[m] <= target) {
            l = m;
        } else {
            r = m;
        }
    }

    std::cout << "index: " << l << " => " << arr[l] << std::endl;
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count() << " [ms]" << std::endl;


    return 0;
}