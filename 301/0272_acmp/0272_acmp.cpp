#include <iostream>

int main()
{
    int value, min, max;
    std::cin >> min >> max;

    for (int i = 3; std::cin >> value; i++) {
        if (i % 2 == 0 && value > max) {
            max = value;
        }
        if (i % 2 == 1 && value < min) {
            min = value;
        }
    }

    std::cout << min + max;

    return 0;
}