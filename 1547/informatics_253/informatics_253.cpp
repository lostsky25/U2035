#include <iostream>

int main() {
	int a;
	std::cin >> a;

	// && - and
	// || - or
	// ! - not

	//std::cout << (true && false) << std::endl;

	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

	return 0;
}