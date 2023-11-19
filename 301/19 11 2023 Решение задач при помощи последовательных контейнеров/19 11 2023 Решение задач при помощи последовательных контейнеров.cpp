#include <iostream>
#include <map>
#include <set>
#include <string>

int main() {

    //<ключ : значение> - map
    //std::map<int, std::string> mp;
    //{
    //    { 1, "first" },
    //    { 2, "second" },
    //    { 3, "third" }
    //};

    //std::cout << mp[2] << std::endl;

    //mp.insert(std::make_pair(10, "string"));
    //mp.insert({ 10, "qwerty"});

    /*for (int i = 0; i < 10; i++) {
        mp.insert({ i, std::to_string(i) });
    }*/

    // Add element
    /*mp[100] = "qwerty2";

    for (const auto& el : mp) {
        std::cout << el.first << ' ' << el.second << std::endl;
    }

    if (mp.contains(100)) {
        std::cout << "Key 100: " << mp[100] << std::endl;
    }*/


    //<значение1 : значение2>
    //std::pair<int, std::string> p { 10, "String" };

    //std::cout << "first: " << p.first << " second: " << p.second << std::endl;

    /*p.first = 10;
    p.second = "qwerty";*/

    //std::set<int> st;

    //for (int i = 0; i < 10; i++) {
    //    st.insert(rand() % 100);
    //}
    //st.insert(-1);
    //st.insert(-1);
    //st.insert(-1);
    //st.insert(-1);
    //st.insert(-1);

    //std::cout << "Size of st: " << st.size() << std::endl;
    
    /*if (st.find(24) != st.end()) {
        std::cout << "st contains 24\n";
        std::cout << *st.find(24) << std::endl;
    }
    else {
        std::cout << "st does not contain 10010\n";
    }*/

    //std::cout << "Count of 24: " << st.count(24) << std::endl;

    //std::cout << "Contains?: " << std::boolalpha << st.contains(24) << std::endl; // C++20

    /*for (std::set<int>::iterator it = st.begin(); it != st.end(); ++it) {
        std::cout << *it << ' ';
    }*/

    //st.erase(24);

    //for (const auto& el : st) {
    //    std::cout << el << ' ';
    //}

    return 0;
}