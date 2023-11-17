#include <iostream>

int sum(int, int);
int sub(int, int);
int mul(int, int);
int _div(int, int);

int countVowels(std::string);

int main() {

    std::string str = "qwerty";

    std::reverse(str.begin(), str.end());

    std::cout << str;

    //std::string str;
    //
    //std::cin >> str;

    //std::cout << "Vowels count: " << countVowels(str) << std::endl;

    //for (int i = 0; i < str.size(); i++) {
    //    // tolower()
    //    // toupper()
    //    std::cout << (char)tolower(str[i]) << std::endl;
    //}

    // 'f' - character
    // "s" - string (not std::string)

    //str.push_back('q');

    //std::cout << "Data: " << str << std::endl;
    //std::cout << "Size: " << str.size() << std::endl;
    //std::cout << "Length: " << str.length() << std::endl;

    /*int a = 10;
    int b = 20;

    std::cout << sum(a, b) << std::endl;
    std::cout << _div(a, 0) << std::endl;*/


    return 0;
}

int countVowels(std::string data) {
    int count = 0;

    for (int i = 0; i < data.size(); i++) {
        // a e i o u
        if (tolower(data[i]) == 'a' || tolower(data[i]) == 'e' || tolower(data[i]) == 'i' ||
            tolower(data[i]) == 'o' || tolower(data[i]) == 'u') {
            count++;
        }
    }
    return count;
}

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int _div(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    else {
        return INT_MIN;
    }
}
