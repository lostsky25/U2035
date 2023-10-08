#include <iostream>
#include <string>

#define int long long

signed main()
{
    int min = 0, max = 0, current = 0, answ = 0;
    std::string data;
    std::getline(std::cin, data);

    for (int i = 0; i < data.size(); i++) {
        if (data[i] - 48 == 1) {
            ++current;
            max = std::max(max, current);
        } 
        
        if (data[i] - 48 == 2) {
            --current;
            min = std::min(min, current);
        }
    }
    answ = max - min + 1;
    std::cout << answ << std::endl;

    return 0;
}