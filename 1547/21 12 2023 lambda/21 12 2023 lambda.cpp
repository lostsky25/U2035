#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <filesystem>

auto printMultipleTimes = [](int multiple, char symbol) {
    for (int i = 0; i < multiple; i++)
        std::cout << symbol;
};

double foo(int i, double j) {
    return i + j;
}

void printArr(int* arr, const int sz) {
    int idx = 0;
    std::for_each(arr, arr + sz, [&idx, sz](const int value) {
        if (idx < sz - 1) 
            std::cout << value << ", ";
        else
            std::cout << value;
        ++idx;
    });
}

namespace fs = std::filesystem;

int main() {
    fs::path dirPath = "C:\\Windows";
    std::string filename = "winsat.log";

    fs::recursive_directory_iterator iter(dirPath, fs::directory_options::skip_permission_denied);

    for (const auto& entry : iter) {
        if (entry.path().filename().string() == filename) {
            std::cout << "Found.\n";
            break;
        }
    }

    //fs::path curPath = fs::current_path();
    //std::cout << curPath.string() << std::endl;

    // fs::is_directory(curPath) -> bool
    // fs::exists(curPath) -> bool
    // fs::create_directory("src")

    //fs::path filePath = "path/to/file.txt";

    //std::cout << "File Path: " << filePath << std::endl;
    //std::cout << "File Name: " << filePath.filename() << std::endl;
    //std::cout << "Parent Path: " << filePath.parent_path() << std::endl;
    //std::cout << "Extension: " << filePath.extension() << std::endl;

    //int answer = [](int x) {
    //    return [](int y) {
    //        return y * 2;
    //    }(x);
    //}(5);

    //std::cout << answer;

    //int arr[] = { 1, 2, 3, 4, 5, 6 };

    // arr == &arr[0]

    //printArr(arr, sizeof(arr) / sizeof(int));

    //int* arr2 = new int[6] { 1, 2, 3, 4, 5, 6 };

    //std::cout << sizeof(arr) / sizeof(int) << std::endl;
    //std::cout << sizeof(arr2) << std::endl;

    //delete[] arr;

    //int answ = [](int a, int b) -> int {
    //    return a + b;
    //}(1, 2);

    //std::cout << answ << std::endl;
    //int x = 10, y = 20, z = 30;

    //std::function<int(int, int)> sum = [&x, &y, &z](int a, int b) -> int {
    //    return a + b + x + y + z;
    //};

    //std::cout << sum(1, 2) << std::endl;

    // double (*ptr_func)(int, double) = foo;
    //std::function<double(int, double)> obj = foo;

    //std::vector<std::function<double(int, double)>> a;

    //a.push_back(foo);
    //a.push_back(foo);
    //a.push_back(foo);
    //a.push_back(foo);

    //auto a = &foo;
    //std::cout << foo << std::endl;
    //std::cout << typeid(a).name() << ' ' << a << std::endl;
    

    return 0;
}


