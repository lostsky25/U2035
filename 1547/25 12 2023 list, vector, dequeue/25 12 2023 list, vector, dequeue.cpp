#include <iostream>
#include <forward_list>
#include <list>
#include <vector>
#include <deque>

//template <class T> struct vector {
//    size_t sz = 0;
//    size_t cap = 1;
//    T* arr;
//
//    vector() {
//        arr = new T[cap];
//    }
//
//    size_t size() const {
//        return sz;
//    }
//
//    size_t capacity() const {
//        return cap;
//    }
//
//    bool empty() const {
//        return sz == 0;
//    }
//
//    void resize() {
//        T* newArr = new T[cap * 2];
//        for (int i = 0; i < cap; ++i)
//            newArr[i] = arr[i];
//
//        delete[] arr;
//        arr = newArr;
//        cap *= 2;
//    }
//
//    void push_back(T val) {
//        if (sz == cap)
//            resize();
//        arr[sz] = val;
//        ++sz;
//    }
//
//    void pop_back() {
//        if (sz > 0) 
//            --sz;
//    }
//
//    /*T pop_back() {
//        return arr[(sz--) - 1];
//    }*/
//
//    T& operator[](size_t index) {
//        return arr[index];
//    }
//};

int main() {

    //vector<int> data;

    //for (int i = 0; i < 10; ++i) {
    //    data.push_back(i + 1);
    //    std::cout << "Size: " << data.size() << " Capacity: " << data.capacity() << std::endl;
    //}

    //data.pop_back();
    //data.pop_back();
    //data.pop_back();

    //for (int i = 0; i < data.size(); ++i) {
    //    std::cout << data[i] << std::endl;
    //}

    /*std::vector<int> data;

    for (int i = 0; i < 16; ++i) {
        data.push_back(i);
        std::cout << "size: " << data.size() << " capacity: " << data.capacity() << std::endl;
    }
    std::cout << "Addr of 1-st: " << &data[0] << std::endl;
    std::cout << "Addr of 1-st: " << data.data() << std::endl;*/

    //data.clear();
    //data.shrink_to_fit();

    //std::cout << "size: " << data.size() << " capacity: " << data.capacity() << std::endl;


    /*for (std::vector<int>::iterator it = data.begin(); it != data.end(); ++it)
        std::cout << *it << std::endl;*/

    //for (std::vector<int>::const_iterator it = data.cbegin(); it != data.cend(); ++it)
    //{
    //    std::cout << *it << std::endl;
    //}

    //for (std::vector<int>::reverse_iterator it = data.rbegin(); it != data.rend(); ++it) {
    //    std::cout << *it << std::endl;
    //}

    //for (std::vector<int>::const_reverse_iterator it = data.crbegin(); it != data.crend(); ++it) {
    //    std::cout << *it << std::endl;
    //}

    /*std::list<int> lst;

    for (int i = 0; i < 10; ++i)
        lst.push_back(i);*/

    //for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
    //    std::cout << *it << std::endl;

    /*std::deque<int> data;

    for (int i = 0; i < 10; ++i)
        data.push_front(i + 1);

    for (auto it = data.begin(); it != data.end(); ++it)
        std::cout << *it << std::endl;*/



    return 0;
}