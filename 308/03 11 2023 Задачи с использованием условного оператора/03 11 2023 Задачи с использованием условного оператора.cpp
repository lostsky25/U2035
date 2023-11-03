#include <iostream>
#include <vector>

int main() {
	int n;
	std::cin >> n;

	std::vector<int> data;

	for (int i = 0; i < n; i++) {
		int val;
		std::cin >> val;

		data.push_back(val);
	}

	std::vector<int> even;  // четные
	std::vector<int> odd;   // нечетные

	for (int i = 0; i < data.size(); i++) {
		if (data[i] % 2 == 0) {
			even.push_back(data[i]);
		}
		else {
			odd.push_back(data[i]);
		}
	}	
	
	for (int i = 0; i < odd.size(); i++)
		std::cout << odd[i] << ' ';
	std::cout << std::endl;

	for (int i = 0; i < even.size(); i++)
		std::cout << even[i] << ' ';
	std::cout << std::endl;

	if (even.size() >= odd.size()) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

	//std::vector<int> arr;

	//for (int i = 0; i < 10; ++i) {
	//	arr.push_back(i);
	//}

	//for (int i = 0; i < arr.size(); ++i) {
	//	std::cout << arr[i] << std::endl;
	//}
	
	/*int x;
	int y;
	int z;

	std::cin >> x >> y >> z;*/

	// std::max(a, b)
	// std::min(a, b)

	//std::cout << std::max(std::max(x, y), z);

	//int x;
	//int y;
	//int z;

	//std::cin >> x >> y >> z;
	//if (x > y && x > z) {
	//	std::cout << x;
	//}
	//else if (y > x && y > z) {
	//	std::cout << y;
	//}
	//else {
	//	std::cout << z;
	//}
	//int x;
	//int y;
	//std::cin >> x >> y;
	//if (x > y) {
	//	std::cout << 1;
	//}
	//else {
	//	std::cout << 2;
	//}
	//int x;

	//std::cin >> x;
	//if (x > 0) {
	//	std::cout << 1;
	//}
	//else if (x < 0) {
	//	std::cout << -1;
	//}
	//else {
	//	std::cout << 0;
	//}

	//int year;
	//std::cin >> year;

	//if ((year % 4 == 0 && 
	//	year % 100 != 0)
	//	|| year % 400 == 0) {
	//	std::cout << "YES";
	//}
	//else {
	//	std::cout << "NO";
	//}

	//int a;
	//int b;
	//std::cin >> a >> b;
	//if (a > b) {

	//	std::cout << a;

	//}
	//else {
	//	std::cout << b;
	//}


	/*int n;
	std::cin >> n;
	std::cout << n * n;*/

	//int n;
	//std::cin >> n;
	//// 1 2 3 4 [5] 6 7 8 9 10 11 12 13 14 15

	//if (n >= 15) {
	//	int b = n / 10;
	//	std::cout << (b + 1) * b;
	//	std::cout << 25;
	//}
	//else {
	//	std::cout << n * n;
	//}

	return 0;
}