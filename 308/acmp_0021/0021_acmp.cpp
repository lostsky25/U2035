#include <iostream>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    int min = std::min(a, std::min(b, c));
    int max = std::max(a, std::max(b, c));

    std::cout << max - min;

    return 0;
}
