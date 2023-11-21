#include <iostream>
#include <bitset>
#include <vector>
#include <chrono>

//int def(int a, int b, int c) {
//	return (std::max(a, std::max(b, c))) - (std::min(a, std::min(b, c)));
//}

//int binSearch(std::vector<int>& nums, int target) {
//	int l = 0;
//	int r = nums.size();
//	int m = 0;
//
//	while (r - l > 1) {
//		m = l + (r - l) / 2;
//
//		if (nums[m] <= target) {
//			l = m;
//		}
//		else {
//			r = m;
//		}
//	}
//
//	if (nums[l] != target) {
//		return -1;
//	}
//
//	return l;
//}
//
//int linSearch(std::vector<int>& nums, int target) {
//	for (int i = 0; i < nums.size(); i++) {
//		if (nums[i] == target) {
//			return i;
//		}
//	}
//	return -1;
//}

int main() {

	//int a = 10;

	//std::cout << a << std::endl;
	//std::cout << &a << std::endl;

	//const int n = 100'000'000;

	//std::vector<int> data;

	//for (int i = 0; i < n; i++) {
	//	data.push_back(i + 1);
	//}

	//std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();

	//int index = binSearch(data, data.size() - 2);
	////int index = linSearch(data, data.size() - 2);

	//std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	//std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << "[ns]" << std::endl;

	//std::cout << "Index: " << index << std::endl;

	/*signed int n = 10;

	unsigned int i = 10;

	std::bitset<32> i_bin(i);

	std::cout << "i_bin: " << i_bin << std::endl;

	int j = 0;

	for (; i >= 0; --i, j++) {
		std::cout << i << std::endl;

		if (j > 15) {
			break;
		}
	}

	std::bitset<32> i_bin2(i);
	std::cout << i << std::endl;

	std::cout << "i_bin2: " << i_bin2 << std::endl;*/

	/*for (int i = 0, c = 1, k = 10; i < n; i++, c++, k--)
	{

	}*/

	// O(n*n)

	//for (int i = 0, c = 0; i < n; i++, c++) {
	//	for (int j = 0, h = 0; j < n; j++, h++) {
	//		// ...
	//	}
	//}

	


    return 0;
}