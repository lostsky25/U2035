#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	unsigned long long res = 1;

	while (res <= n) {
		std::cout << res << " ";
		res *= 2;
	}

	return 0;
}