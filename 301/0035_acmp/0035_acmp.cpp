#include <iostream>

int main() {
	int k, n, m, d;
	std::cin >> k;
	for (int i = 0; i < k; i++)
	{
		std::cin >> n >> m;
		d = (19 * m + (n + 239) * (n + 366) / 2);
		std::cout << d << std::endl;
	}
	return 0;
}