#include <iostream>

int main() {

	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << std::max(std::max(a, b), c);

	return 0;
}