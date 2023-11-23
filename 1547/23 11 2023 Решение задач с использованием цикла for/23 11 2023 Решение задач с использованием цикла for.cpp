#include <iostream>
#include <vector>

int main() {

    const int sz = 10;

    //int arr[sz] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    double arr[sz];

    for (int i = 0; i < sz; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < sz; i++) {
        //std::cout << "Address: 0x" << &arr[i] << std::endl;
        std::cout << "Address: 0x" << (arr + i) << std::endl;
    }

    for (int i = 0; i < sz; i++) {
        std::cout << arr[i] << ' ';
    }

    //int n;
    //std::cin >> n;

    //double sum = 0.0;

    //for (int i = 1; i <= n; i++) {
    //    sum += 1.0 / i;
    //}

    //std::cout << sum << std::endl;

    /*std::string str;
    std::cin >> str;

    bool state = true;

    int sz = str.size();

    for (int i = 0; i < sz / 2; i++) {
        if (str[i] != str[sz - i - 1]) {
            state = false;
            break;
        }
    }

    if (state) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }*/

    //int a, b;
    //std::cin >> a >> b;

    //int res = 1;

    //for (int i = 0; i < b; i++) {
    //    res *= a;
    //}

    //std::cout << res;

    /*int n;
    std::cin >> n;

    std::vector<int> data(n, 0);

    for (int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        std::cout << data[i] << ' ';
    }*/
    
    return 0;
}