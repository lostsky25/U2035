#include <iostream>
#include <string>

//#define H 5
//#define W 5
//
//void fillZeros(int data[H][W], const int h, const int w) {
//	for (int i = 0; i < h; i++) {
//		for (int j = 0; j < w; j++) {
//			if (i > j) {
//				data[i][j] = 0;
//			}
//		}
//	}
//}

int main() {

	//std::string str = "abc;
	//std::cout << str + "abc" << std::endl;

	//str.length(); <=> str.size();
	
	//str.push_back('r');
	//str.push_back('u');
	//str.push_back('p');
	//str.push_back('z');

	//str.append(20, 'f');


	//std::cout << str << std::endl;

	//std::cout << "Empty: " << str.empty() << std::endl;

	// Input
	/*std::cin >> str;
	std::cout << str << std::endl;*/

	//std::getline(std::cin, str);
	//std::cout << str << std::endl;

	// Print
	//std::cout << str << std::endl;

	//for (int i = 0; i < str.size(); i++) {
	//	std::cout << str[i];
	//}
	//std::cout << std::endl;

	//for (char ch : str) {
	//	std::cout << ch;
	//}
	//std::cout << std::endl;

	/*int arr[10];

	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}

	for (int el : arr) {
		std::cout << el << std::endl;
	}*/

	//int arr[H][W];

	//for (int i = 0; i < H; i++) {
	//	for (int j = 0; j < W; j++) {
	//		arr[i][j] = 9;
	//	}
	//}

	//fillZeros(arr, H, W);

	//for (int i = 0; i < H; i++) {
	//	for (int j = 0; j < W; j++) {
	//		std::cout << arr[i][j] << ' ';
	//	}
	//	std::cout << std::endl;
	//}

	// Two-demensional arrays
	//const int height = 3;
	//const int width = 5;

	//int** arr = new int*[height];

	//for (int i = 0; i < height; i++) {
	//	arr[i] = new int[width];
	//}

	///*
	//	i - строка
	//	j - столбец
	//*/

	//for (int i = 0; i < height; i++) {
	//	for (int j = 0; j < width; j++) {
	//		arr[i][j] = i + j;
	//		std::cout << arr[i][j] << ' ';
	//	}
	//	std::cout << std::endl;
	//}

	//for (int i = 0; i < height; i++) {
	//	delete[] arr[i];
	//}

	//delete[] arr;
	 
	//const int height = 3;
	//const int width = 5;

	//int arr[height][width];

	//int* ptr = &arr[0][0];

	//for (int i = 0; i < height; i++) {
	//	for (int j = 0; j < width; j++) {
	//		arr[i][j] = i + j;
	//		std::cout << arr[i][j] << ' ';
	//	}
	//	std::cout << std::endl;
	//}

	//std::cout << std::endl;

	//for (int i = 0; i < height * width; i++) {
	//	std::cout << "Address: " << ptr + i << " Value: " << *(ptr + i) << std::endl;
	//}


	// Arrays
	//int arr[10];

	//int* arr = new int[10];

	//for (int i = 0; i < 10; i++)
	//	*(arr + i) = i;			// *(arr + i) <=> arr[i] = i;
	//	

	//for (int i = 0; i < 10; i++)
	//	std::cout << "Address: " << &arr[i] << " Value: " << arr[i] << ' ' << sizeof(arr[i]) << " bytes" << std::endl;

	//delete[] arr;

    return 0;
}