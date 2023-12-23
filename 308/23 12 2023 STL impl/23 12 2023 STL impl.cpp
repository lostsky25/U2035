#include <iostream>
#include <list>
#include <vector>
#include <deque>

//struct Node {
//    int data;
//    Node* next;
//    Node* prev;
//
//    Node(int _data, Node* _prev, Node* _next) {
//        data = _data;
//        next = _next;
//        prev = _prev;
//    }
//};

int main() {
    std::deque<int> data;

    for (int i = 0; i < 20; ++i) {
        data.push_front(i + 1);
    }

    for (int i = 0; i < 10; ++i) {
        data.pop_front();
    }

    //data.push_back(1);
    //data.push_front(2);
    //data.pop_front();
    //data.pop_back();

    for (auto it = data.begin(); it != data.end(); ++it) {
        std::cout << *it << std::endl;
    }

    //for (int i = 0; i < data.size(); ++i) {
    //    std::cout << data[i] << std::endl;
    //}

    //data.clear();
    //data.shrink_to_fit();

    //std::list<int> lst;

    //lst.push_back(1);
    //lst.push_back(2);
    //lst.push_back(3);

    /*std::vector<int> data;

    for (int i = 0; i < 16; ++i) {
        data.push_back(i + 1);
        std::cout << "size: " << data.size() << " capacity: " << data.capacity() << std::endl;
    }*/

    /*data.clear();
    data.shrink_to_fit();
    std::cout << "size: " << data.size() << " capacity: " << data.capacity() << std::endl;*/

    //std::cout << "Front: " << data.front() << std::endl;
    //std::cout << "Back: " << data.back() << std::endl;

    //std::cout << "reserve(1000)\n";
    //data.reserve(1000);

    //std::cout << "Empty: " << data.empty() << std::endl;

    //std::cout << "size: " << data.size() << " capacity: " << data.capacity() << std::endl;

    /*for (std::vector<int>::iterator it = data.begin(); it != data.end(); ++it) {
        std::cout << *it << std::endl;
    }*/

    //for (std::vector<int>::reverse_iterator it = data.rbegin(); it != data.rend(); ++it) {
    //    //*it = 10;
    //    std::cout << *it << std::endl;
    //}

    //for (std::vector<int>::const_iterator it = data.cbegin(); it != data.cend(); ++it) {
    //    //*it = 10;
    //    std::cout << *it << std::endl;
    //}

    //for (std::vector<int>::const_reverse_iterator it = data.crbegin(); it != data.crend(); ++it) {
    //    //*it = 10;
    //    std::cout << *it << std::endl;
    //}

    /*Node* node = new Node(10, nullptr, nullptr);
    node->next = new Node(20, node, nullptr);
    node->next->next = new Node(30, node->next, nullptr);*/

    //Node* node = new Node(10, nullptr);

    //node->next = new Node(20, nullptr);
    //node->next->next = new Node(30, nullptr);

    return 0;
}