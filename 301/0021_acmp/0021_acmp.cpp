#include <iostream>

int main()
{
	int a, b, c;
	int max, min;
	std::cin >> a >> b >> c;
	min = std::min(a, std::min(b, c));
	max = std::max(a, std::max(b, c));
	std::cout << max - min;

    return 0;
}