#include <iostream>
#include <vector>
#include <stack>

struct Point {
	int x;
	int y;
	int z;
};

void bubbleSort(std::vector<int>&);
Point getXYZ();

int main() {
	std::string str;
	std::cin >> str;

	std::stack<char> s1;

	for (size_t i = 0; i < str.size(); ++i) {
		// ...
	}

	if (s1.empty()) {
		std::cout << "yes";
	}
	else {
		std::cout << "no";
	}

	//std::stack<int> s1;

	//for (size_t i = 0; i < 5; i++) {
	//	s1.push(i + 1);
	//}

	//std::cout << "Top element: " << s1.top() << std::endl;
	//std::cout << "Size: " << s1.size() << std::endl;

	//while (!s1.empty()) {
	//	std::cout << s1.top() << std::endl;
	//	s1.pop();
	//}

	//std::cout << "Size: " << s1.size() << std::endl;



	//while (true)
	//{
	//	Point p1 = getXYZ();
	//	std::cout << p1.x << ' ' << p1.y << ' ' << p1.z << std::endl;
	//}

	//srand(time(0));

	//std::vector<int> data;

	//for (int i = 0; i < 20; ++i) {
	//	data.push_back(rand() % 100);
	//	std::cout << data[i] << ' ';
	//}
	//std::cout << std::endl;

	//bubbleSort(data);

	//for (int i = 0; i < 20; ++i) {
	//	std::cout << data[i] << ' ';
	//}
	//std::cout << std::endl;


	/*int value = 10;
	GetQuad2(&value);

	std::cout << value;*/

	return 0;
}

Point getXYZ() {
	srand(time(0));
	Point p1 = { rand(), rand(), rand() };

	return p1;
}

void bubbleSort(std::vector<int>& data) {
	for (size_t i = 0; i < data.size(); i++) {
		for (size_t j = 0; j < data.size() - i - 1; j++) {
			if (data[j + 1] < data[j]) {
				/*int tmp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = tmp;*/
				std::swap(data[j + 1], data[j]);
			}
		}
	}
}


//void GetQuad(int& ref) {
//	ref = ref * ref;
//}
//
//void GetQuad2(int* ref) {
//	*ref = *ref * *ref;
//}