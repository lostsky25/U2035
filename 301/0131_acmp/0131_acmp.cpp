#include <iostream>

int main()
{
	int n, x, y, max = 0, k = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> x >> y;
		if (y == 1 && x > max)
		{
			max = x;
			k = i + 1;
		}
	}
	if (max == 0)
		std::cout << "-1";
	else
		std::cout << k;
}