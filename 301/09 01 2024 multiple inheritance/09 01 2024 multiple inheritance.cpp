#include <iostream>
#include <vector>

//struct Base {
//    int x = 0;
//    void f() {
//        std::cout << "Base\n";
//    }
//};
//
//struct Derived : public Base {
//    int y = 1;
//    void g() {
//        std::cout << "Derived\n";
//    }
//};

//struct Granny {
//    int g = 0;
//    void f() { std::cout << g; }
//};
//
//struct Mom : virtual Granny {
//    int m = 0;
//};
//
//struct Dad : virtual Granny {
//    int d = 1;
//};
//
//struct Son : public Mom, private Dad {
//    int s = 2;
//    void h() { std::cout << "h"; }
//};

// [ g | m | d | s ]

int main() {
    std::vector<int> data = { 12,13,21,43,2,4,234,2,34,23,4 };

    std::vector<int> a = std::move(data);

    for (auto& el : data) std::cout << el << ' ';
    std::cout << std::endl;

    for (auto& el : a) std::cout << el << ' ';
    std::cout << std::endl;



    //Son s;
    //s.f();
    

    //Base b;
    //std::pair<int, int> p{ 1, 2 };
    //
    //// [ x ] - Base
    //// [ x | ? ] - Derived

    //Derived& d2 = reinterpret_cast<Derived&>(p);

    //std::cout << d2.x << std::endl;
    //std::cout << d2.y << std::endl;

    return 0;
}
