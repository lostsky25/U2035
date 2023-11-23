#include <iostream>

int main()
{
    int a, b;
    std::cin >> a;
    b = 1;
    while (b * b <= a) {
        std::cout << b * b << std::endl;
        b++;
    }
    return 0;
}