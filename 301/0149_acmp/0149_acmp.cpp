#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n, 0);

    //int i = 0;
    //std::cout << i - 1;
    //for (int i = 0; i < n; i++)
    for (int i = 0; i < arr.size(); i++)
        std::cin >> arr[i];

    for (int i = n - 1; i >= 0; i--)
        std::cout << arr[i] << ' ';

    return 0;
}