#include <iostream>

int main() {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    if (x1 * x2 > 0 && y1 * y2 > 0) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}