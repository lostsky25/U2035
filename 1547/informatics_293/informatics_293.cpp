#include <iostream>

int main() {
    int x;
    int y;

    std::cin >> x;
    std::cin >> y;
    
    if (x > y) {
        std::cout << 1;
    }
    else if (x < y) {
        std::cout << 2;
    }
    else {
        std::cout << 0;
    }

    return 0;
}
