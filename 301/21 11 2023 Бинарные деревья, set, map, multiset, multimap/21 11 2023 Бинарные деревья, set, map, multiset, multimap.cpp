#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>

int main() {

    //std::unordered_multimap<int, char> ummp;

    //for (int i = 0; i < 5; i++) {
    //    // ump[i] = 'c';
    //    for (int j = 0; j < 3; j++)
    //    {
    //        ummp.insert({ i, (char)rand() % 40 });
    //    }
    //}

    //auto it_range = ummp.equal_range(0);

    //for (auto it = it_range.first; it != it_range.second; ++it) {
    //    std::cout << (*it).first << ' ' << (*it).second << std::endl;
    //}

    /*for (const auto& el : ummp) {
        std::cout << el.first << ' ' << el.second << std::endl;
    }*/

    //std::cout << ump[5] << std::endl; // O(1)

    //ump.erase(5); // O(1)
    //ump.insert({ 5, (char)rand() % 40 }); // O(1)

    //std::cout << "Count buckets: " << ump.bucket_count() << std::endl;
    //std::cout << "Load factor: " << ump.load_factor() << std::endl;

    //std::multimap<int, char> mmp;

    //for (int i = 0; i < 5; i++) {
    //    for (int j = 0; j < 3; j++) {
    //        mmp.insert({ i, (char)rand() % 50 });
    //    }
    //}

    // FIND
    /*auto it = mmp.find(123123);
    if (it != mmp.end()) {
        std::cout << (*it).first << ' ' << (*it).second << std::endl;
    }
    else {
        std::cout << "Not found\n";
    }*/

    // LOWER_BOUND
    /*auto it = mmp.lower_bound(0);
    if (it != mmp.end()) {
        std::cout << (*it).first << ' ' << (*it).second << std::endl;
    }
    else {
        std::cout << "Not found\n";
    }*/

    // UPPER_BOUND
    //auto it = mmp.upper_bound(0);
    //if (--it != mmp.end()) {
    //    std::cout << "Answ: " << (*it).first << ' ' << (*it).second << std::endl;
    //}
    //else {
    //    std::cout << "Not found\n";
    //}

    //for (const auto& el : mmp) {
    //    std::cout << el.first << ' ' << el.second << std::endl;
    //}

    //std::cout << std::endl << mmp.size() << std::endl;

    return 0;
}