#include <iostream>

int main() {
	int x1, y1;
	int x2, y2;

	std::cin >> x1 >> y1;
	std::cin >> x2 >> y2;

	if (abs(x1 - x2) == abs(y1 - y2)) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

	return 0;
}