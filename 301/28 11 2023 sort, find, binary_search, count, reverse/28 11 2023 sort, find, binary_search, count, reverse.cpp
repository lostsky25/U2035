#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

//bool comp(int e1, int e2) {
//    if (e1 < e2) {
//        return true;
//    }
//    return false;
//}

bool comp(int e1, int e2) {
    return e1 < e2;
}

//bool comp2(std::pair<int, int> e1, std::pair<int, int> e2) {
//    if (e1.second < e2.second) {
//        return true;
//    }
//    return false;
//}

//bool GreaterThenZero(int el) {
//    return el > 0;
//}
//
//bool LessThenZero(int el) {
//    return el > 0;
//}

//struct Point {
//    int x;
//    int y;
//    int z;
//};

//bool pred(const Point& p) {
//    return p.x > 0 && p.y > 0 && p.z > 0;
//}

//class MyFunctor
//{
//public:
//    int operator()(int a, int b) {
//        return a + b;
//    }
//};

//class Person
//{
//public:
//    Person(std::string _name, int _score) {
//        name = _name;
//        score = _score;
//    }
//
//    bool operator()(const Person& p) {
//        return p.score > 200;
//    }
//
//private:
//    std::string name;
//    int score;
//};

//bool isEven(int el) {
//    return el % 2 == 0;
//}

template <class T>
struct Node {
    T data;
    Node<T>* next;

    Node(T _data, Node<T>* _node) {
        data = _data;
        next = _node;
    }
};

template <class T>
class ForwardList {
public:
    ForwardList() {
        head = nullptr;
        sz = 0;
    }

    void push_front(T data) {
        head = new Node<T>(data, head);
        sz++;
    }

private:
    Node<T>* head;
    size_t sz;
};

int main() {


    // std::fill_n
    //std::vector<int> data(20, -1);

    //std::fill_n(data.begin() + 1, 5, 0);

    //for (const auto& el : data) {
    //    std::cout << el << ' ';
    //}

    // std::fill
    //std::vector<int> data(20);

    //std::fill(data.begin(), data.end(), -1);

    //for (const auto& el : data) {
    //    std::cout << el << ' ';
    //}

    // std::reverse
    //std::deque<int> data;

    //for (int i = 0; i < 10; i++) {
    //    int r = rand() % 100;
    //    data.push_back(r);
    //}

    //for (const int& el : data) {
    //    std::cout << el << ' ';
    //}
    //std::cout << std::endl;

    //std::reverse(data.begin(), data.end());

    //for (const int& el : data) {
    //    std::cout << el << ' ';
    //}
    //std::cout << std::endl;

    /*std::vector<Person> data = {
        { "1", 103},
        { "2", 203},
        { "3", 303},
        { "4", 73},
        { "5", 93},
    };

    std::cout << std::count_if(data.begin(), data.end(), data.front()) << std::endl;*/

    /*MyFunctor myFunctor;
    
    std::cout << myFunctor(2, 5) << std::endl;*/

    // std::count_if
    //std::vector<Point> v;
    //for (size_t i = 0; i < 10; i++) {
    //    Point p1 = { rand() % 10 - 2, rand() % 10, rand() % 10 };
    //    v.push_back(p1);
    //}

    //for (const auto& el : v) {
    //    std::cout << el.x << ' ' << el.y << ' ' << el.z << std::endl;
    //}

    //int count = std::count_if(v.begin(), v.end(), pred);

    //std::cout << count << std::endl;

    // std::count
    //std::deque<int> data;
    //data.push_back(10);

    //for (int i = 0; i < 10; i++) {
    //    int r = rand() % 100;
    //    data.push_back(r);
    //    data.push_back(r);
    //}

    //int count = std::count(data.begin(), data.end(), 34);

    //std::cout << count << std::endl;

    // std::binary_search
    /*std::deque<int> data;
    data.push_back(10);

    for (int i = 0; i < 10; i++) {
        int r = rand() % 100;
        data.push_back(r);
        data.push_back(r);
    }

    std::cout << std::boolalpha << std::binary_search(data.begin(), data.end(), 12313) << std::endl;*/


    // std::find
    /*std::vector<int> data;
    data.push_back(10);

    for (int i = 0; i < 10; i++) {
        int r = rand() % 100;
        data.push_back(r);
        data.push_back(r);
    }

    auto it = std::find(data.begin(), data.end(), 10);

    if (it != data.end()) {
        std::cout << *it << std::endl;
    }
    else {
        std::cout << "Not found!" << std::endl;
    }*/


    // std::sort

    /*std::deque<int> data;

    for (int i = 0; i < 10; i++) {
        int r = rand() % 100;
        data.push_back(r);
        data.push_back(r);
    }*/

    // std::sort(data.begin(), data.end(), std::less<int>());
    // std::sort(data.begin(), data.end(), std::greater<int>());
    //std::sort(data.begin(), data.end(), comp);

    //for (int i = 0; i < 10; i++) {
    //    std::cout << data[i] << ' ';
    //}

    return 0;
}