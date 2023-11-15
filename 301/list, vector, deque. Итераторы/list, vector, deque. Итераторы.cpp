#include <iostream>
#include <vector>
//#include <filesystem>

//namespace fs = std::filesystem;

//std::vector<fs::path> getAllFilesFromDisk(fs::path path) {
//    std::vector<fs::path> all_files;
//
//    for (const auto& entry : fs::recursive_directory_iterator(path, 
//        fs::directory_options::skip_permission_denied)) {
//
//        if (!entry.is_directory()) {
//            all_files.push_back(entry.path());
//        }
//    }
//    return all_files;
//}

struct Node {
    Node* next;
    int data;
};

int main() {

    Node* head = new Node;

    Node* element_1 = new Node;

    Node* element_2 = new Node;

    head->next = element_1;
    // head->next->next = element_2;
    element_1->next = element_2;


    /*std::vector<int> data;

    for (int i = 0; i < 10; i++)
        data.push_back(i + 1);*/

    //std::vector<int>::iterator it = data.begin() + 1;
    //std::vector<int>::iterator it_end = data.end();

    //std::cout << typeid(it).name() << std::endl;
    //std::cout << typeid(it_end).name() << std::endl;

    //std::cout << &(*it) << std::endl;
    //std::cout << *it_end << std::endl;
    //std::cout << data.data() << std::endl;

    //for (std::vector<int>::iterator it = data.begin(); it != data.end(); ++it) {
    //    *it = 1;
    //    std::cout << *it << std::endl;
    //}    
    //
    //for (std::vector<int>::const_iterator it = data.cbegin(); it != data.cend(); ++it) {
    //    std::cout << *it << std::endl;
    //}    
    
    //for (std::vector<int>::reverse_iterator it = data.rbegin(); it != data.rend(); ++it) {
    //    std::cout << *it << std::endl;
    //}    

    /*for (std::vector<int>::const_reverse_iterator it = data.crbegin(); it != data.crend(); ++it) {
        std::cout << *it << std::endl;
    }*/    
    

    /*fs::path currentPath = fs::current_path();
    std::cout << currentPath.string() << std::endl;*/

    //fs::path filePath = "path/to/file.txt";

    //std::cout << "File Path: " << filePath << std::endl;
    //std::cout << "File Name: " << filePath.filename() << std::endl;
    //std::cout << "Parent Path: " << filePath.parent_path() << std::endl;
    //std::cout << "Extension: " << filePath.extension() << std::endl;

    //fs::path dirPath = "C:/Windows/System32/Hydrogen";

    //fs::recursive_directory_iterator iter(dirPath);

    //int count_dirs = 0;
    //int count_files = 0;
    //for (const auto& entry : iter) {
    //    if (entry.is_directory()) {
    //        std::cout << "Directory: " << entry.path() << std::endl;
    //        ++count_dirs;
    //    }
    //    else {
    //        std::cout << "File: " << entry.path() << std::endl;
    //        ++count_files;
    //    }
    //}

    //std::cout << "Dir count: " << count_dirs << " Files count: " << count_files << std::endl;

    //fs::path path = fs::current_path() / "path";
    //std::cout << path.string() << std::endl;

    return 0;
}