#include <iostream>

int main() {
	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;
	if ((num1 + num2) % 2 == 1) {
		std::cout << "YES";
	}
	else if ((num3 + num2) % 2 == 1) {
		std::cout << "YES";
	}
	else if ((num3 + num1) % 2 == 1) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

    return 0;
}