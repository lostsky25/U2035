#include <iostream>

int main() {
    int a, b, c, n;

    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cin >> a >> b >> c;

        if (a == b + c || b == a + c || c == a + b) {
            std::cout << "YES\n";
        }
        else {
            std::cout << "NO\n";
        }
    }
    return 0;
}