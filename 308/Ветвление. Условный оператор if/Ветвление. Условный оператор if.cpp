#include <iostream>

int main() {
	//int sum = 0;

	//for (int i = 0; i < 10; i++) {
	//	sum += i;

	//	if (i > 5) {
	//		std::cout << "break" << std::endl;
	//		break;
	//	}
	//}

	int i = 0;

	while (i < 10) {
		i++;
		if (i % 2 == 0)
			continue;

		std::cout << i << std::endl;
	}

	//int i = 0;

	//while (i < 10) {
	//	// val % 2 == 0 четное
	//	// val % 2 == 1 нечетное

	//	if (i > 2 && i % 2 == 0)
	//		break;

	//	std::cout << i << std::endl;
	//	i++;
	//}

	// 'c' - character
	// "qwerty" - string

	//int w = 5;
	//int h = 5;

	//while (true) {
	//	for (int i = 0; i < h; ++i) {
	//		for (int j = 0; j < w; ++j) {
	//			std::cout << (char)(rand() % 127) << ' ';
	//		}
	//		std::cout << std::endl;
	//	}
	//	system("cls");
	//}

	//float w = 2;
	//float h = 2;

	//while (true) {
	//	for (int i = 0; i < (int)h; ++i) {
	//		for (int j = 0; j < (int)w; ++j) {
	//			std::cout << j + 1 << ' ';
	//		}
	//		std::cout << std::endl;
	//	}
	//	w += 0.1;
	//	h += 0.1;
	//	system("cls");
	//}

	//int i = 0;

	//do {
	//	std::cout << i << std::endl;
	//	i++;
	//} while (i < 10);

	//for (int el : { 1, 2, 3, 4, 5 }) {
	//	std::cout << el << std::endl;
	//}

	//for (char ch : "Hello") {
	//	std::cout << ch << std::endl;
	//}

	/*for (int i = 0, j = 0; j < 3 && i < 7; i++, j++)
	{
		std::cout << i << std::endl;
	}*/
	
	/*for (int i = 0, j = 0; i < 5 && j < 10; ++i, ++j) {
		std::cout << i << " " << j << std::endl;
	}*/


	//int num = 10;

	//if (num < 10)
	//	std::cout << "num < 10\n";
	//else if (num == 10)
	//	std::cout << "num == 10\n";
	//else
	//	std::cout << "num > 10\n";
	
	//int x = 10;

	//{
	//	int x = 20;
	//	std::cout << x << std::endl;
	//}
	//std::cout << x << std::endl;


	return 0;
}