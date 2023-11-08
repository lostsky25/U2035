#include <iostream>

int main()
{
	std::string str;

	std::cin >> str;

	int count = 0;
	int maxCount = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '0') {
			count++;
			if (count > maxCount) {
				maxCount = count;
			}
		}
		else if (str[i] == '1') {
			count = 0;
		}
	}

	std::cout << maxCount;

	return 0;
}
