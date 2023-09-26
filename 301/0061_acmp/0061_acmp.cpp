#include <iostream>

int main()
{
	int a, b;
	int x = 0;
	int y = 0;

	for (int i = 0; i < 4; i++)
	{
		std::cin >> a >> b;
		x += a;
		y += b;
	}
	if (x > y)
		std::cout << "1";
	else if (x < y)
		std::cout << "2";
	else
		std::cout << "DRAW";
}