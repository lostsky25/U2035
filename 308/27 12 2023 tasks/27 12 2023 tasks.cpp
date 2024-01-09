#include <iostream>
#include <vector>

int main() {
    std::vector<int> data;

    data.reserve(20);

    std::cout << "Cap: " << data.capacity() << std::endl;
    std::cout << "Sz: " << data.size() << std::endl;

    data.push_back(1);
    data.push_back(1);
    data.push_back(1);
    data.push_back(1);
    data.push_back(1);
    data.push_back(1);
    data.push_back(1);
    data.push_back(1);
    data.push_back(1);


    return 0;
}