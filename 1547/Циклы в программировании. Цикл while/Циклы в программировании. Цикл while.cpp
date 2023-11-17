#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr;

    for (int i = 0; i < 100; i++) {
        arr.push_back(i + 1);
    }

    int target = 77;

    /*for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            std::cout << i << std::endl;
            break;
        }
    }*/

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
        std::cout << "index: " << l << " value: " << arr[l] << std::endl;
    }
    else {
        std::cout << "Not found\n";
    }

    //std::vector<int> arr;

    //for (int i = 0; i < 100; i++) {
    //    arr.push_back(i + 1);
    //}

    //for (int i = 0; i < arr.size(); i++) {
    //    std::cout << arr[i] << std::endl;
    //}
    
    //unsigned long long n, ans;
    //std::cin >> n;
    //
    //ans = 1;

    //for (unsigned long long i = 1; i <= n; i++) {
    //    ans = ans * i;
    //}

    //std::cout << ans;

    //int n;
    //std::cin >> n;

    //for (int i = 1; i <= 10; i++) {
    //    std::cout << n << "*" << i << "=" << n * i << std::endl;
    //}

    //int n, result;
    //result = 0;

    //std::cin >> n;
    //
    //for (int i = 1; i <= n; i++)
    //    result += i;
    //
    //std::cout << result;

    //for (int i = 0; i < 100; i++) {
    //    std::cout << i;
    //}

    //int i = 0;

    //do {
    //    std::cout << i;
    //    ++i;
    //} while (i < 100);

    /*int i = 0;
    
    while (i < 100) {
        std::cout << i;
        ++i;
    }

    std::cout << std::endl << i << std::endl;*/
    
    return 0;
}