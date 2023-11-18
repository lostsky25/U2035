// leetcode_345.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isVowel(char ch) {
    if (isalpha(ch)) {
        return tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u';
    }
    else {
        return false;
    }
}

std::string reverseVowels(std::string s) {
    int l = 0;
    int r = s.size() - 1;

    if (s.size() == 2) {
        if (isVowel(s[l]) && isVowel(s[r])) {
            std::swap(s[l], s[r]);
        }
    }

    while (r - l > 1) {
        while (!isVowel(s[l]) && l < s.size()) {
            l++;
        }
        while (!isVowel(s[r]) && r > 0) {
            r--;
        }
        if (isVowel(s[l]) && isVowel(s[r])) {
            std::swap(s[l], s[r]);
        }
        r--;
        l++;
    }
    return s;
}