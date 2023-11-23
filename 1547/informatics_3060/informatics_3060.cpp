#include <iostream>
int main() {
    int n, res = 1;
    std::cin >> n;

    bool state = false;

    if (n == 1) {
        state = true;
    }

    while (res < n) {
        res *= 2;

        if (res == n) {
            state = true;
            break;
        }
    }

    if (state) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }


    return 0;
}