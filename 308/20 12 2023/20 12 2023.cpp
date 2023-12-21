#include <iostream>
#include <algorithm>
#include <functional>

void printMessage(const std::string& msg) {
    std::cout << msg;
}

int sum(int a, int b) {
    return a + b;
}

//void printArr(int* arr, const int sz) {
//    int idx = 0;
//    std::for_each(arr, arr + sz,
//        [sz, &idx](const int& val) {
//            if (idx < sz - 1)
//                std::cout << val << ", ";
//            else
//                std::cout << val;
//            ++idx;
//        });
//}

#include <filesystem>

namespace fs = std::filesystem;

std::vector<fs::path> getAllFilesFromDisk(fs::path path) {
    std::vector<fs::path> allFiles;

    for (const auto& entry : fs::recursive_directory_iterator(path, fs::directory_options::skip_permission_denied)) {
        if (entry.is_regular_file())
            allFiles.push_back(entry.path());
    }
    return allFiles;
}

int main() {
    fs::path path = "C:\\Windows\\System32\\Licenses";

    std::vector<fs::path> data = getAllFilesFromDisk(path);
    
    for (const auto& el : data) {
        std::cout << el.string() << std::endl;
    }

    //fs::path currentPath = fs::current_path();
    //std::cout << currentPath.string() << std::endl;

    //if (fs::is_directory(currentPath))
    //    std::cout << "It is a dir\n";
    //else
    //    std::cout << "It is not a dir\n";

    //if (fs::exists(currentPath))
    //    std::cout << "It is exist\n";
    //else
    //    std::cout << "It is not exist\n";

    //fs::create_directory("src");

    //std::cout << "Path: " << currentPath << std::endl;
    //std::cout << "Name: " << currentPath.filename() << std::endl;
    //std::cout << "Parent Path: " << currentPath.parent_path() << std::endl;
    //std::cout << "Extension: " << currentPath.extension() << std::endl;

    

    //int answer = [](int x) {
    //    return [](int y) {
    //        return y * 2;
    //    }(x);
    //}(5);

    //int arr[] = { 1, 2, 3, 4, 5, 6 };
    //int* arr2 = new int[5] { 1, 2, 3, 4, 5 };

    //std::cout << sizeof(arr) / sizeof(int) << std::endl;
    //std::cout << sizeof(arr2) << std::endl;

    //printArr(arr, sizeof(arr) / sizeof(int));

    //int x = 10, y = 20, z = 30;

    //int answ = [x, &y, &z](int a, int b) -> int {
    //    return a + b + x + y + z;
    //}(10, 20);

    //std::cout << answ << std::endl;

    //void(*ptr_func1)(const std::string&) = printMessage;
    //int(*ptr_func2)(int, int) = sum;
    //
    //std::function<void(const std::string&)> func1 = printMessage;
    //std::function<int(int, int)> func2 = sum;

    //ptr_func1("Message 1\n");
    //std::cout << ptr_func2(10, 20) << std::endl;

    //func1("Message 2\n");
    //std::cout << func2(10, 20) << std::endl;

    /*auto lambda_sum = [](int a, int b) {
        return a + b;
    };

    auto printMultipleTimes = [](int count, char ch) {
        for (size_t i = 0; i < count; i++)
            std::cout << ch;
    };

    printMultipleTimes(10, 'h');*/

    return 0;
}