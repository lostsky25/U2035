#include <iostream>

int main()
{
    const std::string str = "qwertyuiopasdfghjklzxcvbnmq";

    char ch;
    std::cin >> ch;

    int i = 0;
    while (str[i] != ch) {
        ++i;
    }
    ++i;

    std::cout << str[i];

    return 0;
}
