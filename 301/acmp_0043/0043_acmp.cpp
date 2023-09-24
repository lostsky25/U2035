#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;

    int count = 0;
    int answ = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '0') {
            count++;
            
            //answ = std::max(answ, count);

            if (answ < count) {
                answ = count;
            }
        }
        else {
            count = 0;
        }
    }

    std::cout << answ;

    return 0;
}
