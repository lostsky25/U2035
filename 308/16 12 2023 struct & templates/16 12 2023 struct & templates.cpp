#include <iostream>

//template <typename T>
//template <class T> 
//struct Point {
//    T x;
//    T y;
//};
//
//template <class K>
//struct Triangle {
//    Point<K> points[3];
//
//    void foo() const;
//
//    double square() const;
//};
//
//template <class K>
//void Triangle<K>::foo() const {
//    std::cout << this << std::endl;
//    std::cout << this->points[0].x << std::endl;
//}
//
//template <class K>
//double Triangle<K>::square() const {
//    double sq = points[0].x * (points[1].y - points[2].y) +
//        points[1].x * (points[2].y - points[0].y) +
//        points[2].x * (points[0].y - points[1].y);
//
//    return abs(sq) / 2.0;
//}

//struct A {
//    //int a_;
//    //int m_a;
//    int a;
//
//    void set(int a) {
//        this->a = a;
//    }
//};

//template <class T>
//T max(T a, T b) {
//    return a < b ? b : a;
//}

//void foo(void) {
//    return;
//}

//template<class Func>
//void foo2(Func func) {
//    func();
//}

//#include <vector>
//#include <algorithm>
//
//int comp(const int* i, const int* j)
//{
//    return *i - *j;
//}

int main() {    
    //int* arr = new int[5000000];

    //for (int i = 0; i < 5000000; ++i) {
    //    arr[i] = rand();
    //}

    //clock_t t1 = clock();

    //std::sort(arr, arr + 5000000);
    //// qsort(arr, 5000000, sizeof(int), (int(*) (const void*, const void*)) comp);

    //clock_t t2 = clock();


    //std::cout << (double)(t2 - t1) / CLOCKS_PER_SEC << std::endl;

    // foo2(foo);


    //std::cout << max(10, 20);

    //Triangle<int> triangle;

    //triangle.points[0] = { 1, 2 };
    //triangle.points[1] = { 3, 6 };
    //triangle.points[2] = { 9, 12 };

    //std::cout << triangle.square() << std::endl;

    //std::cout << &triangle << std::endl;
    //triangle.foo();

    //Point<int> p1{ 1, 2 };
    //Point* p1 = new Point{ 1, 2 };

    //delete p1;

    return 0;
}