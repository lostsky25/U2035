#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    fs::path currentPath = fs::current_path();

    std::cout << currentPath.string() << std::endl;

    return 0;
}