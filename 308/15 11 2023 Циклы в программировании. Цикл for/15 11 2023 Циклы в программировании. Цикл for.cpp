#include <iostream>
#include <vector>
//#include <chrono>

int main() {
	//const int sz = 100'000'000;

	//std::vector<int> arr;

	//for (int i = 0; i < sz; i++) {
	//	arr.push_back(i + 1);
	//}

	// ------------------------------------------
	
	//int index;
	//int target = sz - 2;
	//std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	/*for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == target) {
			index = i;
			break;
		}
	}*/

	/*int l = 0;
	int r = sz - 1;
	int m = 0;

	while (r - l > 1) {
		m = (l + r) / 2;

		if (arr[m] <= target) {
			l = m;
		}
		else {
			r = m;
		}
	}

	if (arr[l] == target) {
		index = l;
	}
	else {
		index = -1;
	}

	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << "[ns]" << std::endl;*/

	// ------------------------------------------

	/*for (int i = 0; i < 10; i++) {
		std::cout << arr[i] << std::endl;
	}*/


	// Задача 3: Поиск факториала числа
    // Условие задачи: Напишите программу для вычисления факториала заданного числа N.
	// 3! = 1 * 2 * 3
	// a *= b <=> a = a * b

	//int n;
	//std::cin >> n;

	//unsigned long long fact = 1;

	//for (unsigned long long i = 1; i <= n; i++) {
	//	fact *= i;
	//}

	//std::cout << fact;
	

	/*
	Задача 2: Таблица умножения
	Условие задачи : **Выведите таблицу умножения для заданного числа N.
	*/

	//int n;

	//std::cout << "Enter n: ";
	//std::cin >> n;

	//for (int i = 1; i <= 10; i++) {
	//	std::cout << n << " x " << i << " = " << n * i << std::endl;
	//}

	//	Задача 1: Сумма чисел до N

	//		Условие задачи : Напишите программу, которая запрашивает у
	//		пользователя число N, а затем выводит сумму всех целых чисел от
	//		1 до N

	//		int n, sum = 0;
	//	std::cin >> n;

	//	for (int i = 1; i <= n; i--)
	//		sum += i;

	//	std::cout << sum;
	//}

	//int n, sum = 0;

	//std::cout << "Enter a number: ";
	//std::cin >> n;

	//for (int i = 1; i <= n; i++) {
	//	sum += i;
	//}

	//std::cout << "The sum of all integers from 1 to " << n << " is: " << sum << std::endl;

	//int n = 10;

	//for (int j = 0; j < n; j++) {
	//	int i = 0;
	//	while (i < n) {
	//		std::cout << '=';
	//		i++;
	//	}

	//	for (int i = 0; i < n; i++) {
	//		std::cout << '=';
	//	}
	//	std::cout << '\n';
	//}

    return 0;
}
