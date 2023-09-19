#include <iostream>

#define SIZE 10

int main() {
	// const int size = 10; // keywords = const
	
	int arr[SIZE]; // = { 1, 2, 3, 1, 2, 1, 1, 34, 54, 10 };

	// Заполнение
	for (int i = SIZE - 1; i >= 0; i--)
		arr[i] = i * i;

	// AVG
	int sum = 0, avg = 0;
	for (int i = 0; i < SIZE; i++)
		sum += arr[i];

	avg = sum / SIZE;

	std::cout << "AVG: " << avg << std::endl;

	// Min element
	int min_el = arr[0];
	//int min_el = 1e9;
	//int min_el = INT_MAX;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min_el) {
			min_el = arr[i];
		}
	}

	std::cout << "Min element: " << min_el << std::endl;
	
	// Max element
	int max_el = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (max_el < arr[i]) {
			max_el = arr[i];
		}
	}

	std::cout << "Max element: " << max_el << std::endl;

	// Вывод
	for (int i = 0; i < SIZE; i++)
		std::cout << arr[i] << ' ';

	return 0;
}