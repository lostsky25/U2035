#include <iostream>
#include <algorithm>

int main() {
	srand(time(NULL));

	int n;
	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}

	std::sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << std::endl;
	}

	delete[] arr;

	//std::string str = "qwerty";
	//std::reverse(str.begin(), str.end()); // O(n)
	//std::cout << str;

	//char* str = new char[100];
	//std::cin.getline(str, 100);

	//int len = std::strlen(str);

	//char* revStr = new char[len + 1];

	//for (int i = 0; i < len; i++)
	//{
	//	revStr[i] = str[len - 1 - i];
	//}

	//revStr[len] = '\0';
	//
	//std::cout << revStr;

	//delete[] str;
	//delete[] revStr;

	//double* a = new double;
	//double* b = new double;
	//double* result = new double;

	//std::cout << "Enter a: ";
	//std::cin >> *a;
	//std::cout << "Enter b: ";
	//std::cin >> *b;

	//char op;
	//std::cout << "Enter operation: ";
	//std::cin >> op;

	//switch (op)
	//{
	//case '*':
	//	*result = *a * *b;
	//	break;
	//case '+':
	//	*result = *a + *b;
	//	break;
	//case '-':
	//	*result = *a - *b;
	//	break;
	//case '/':
	//	*result = *a / *b;
	//	break;

	//default:
	//	std::cout << "Error: Incorrect operation!\n";
	//}

	//std::cout << *result << std::endl;

	//delete a;
	//delete b;
	//delete result;

	return 0;
}