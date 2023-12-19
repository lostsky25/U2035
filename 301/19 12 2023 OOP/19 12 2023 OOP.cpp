#include <iostream>
#include <vector>

//struct Granny {
//    int x;
//
//protected:
//    void f() {
//        std::cout << 1;
//    }
//};
//
//struct Mom : private Granny {
//    friend class Son;
//
//    int y;
//
//    void g() {
//        std::cout << 2;
//    }
//};
//
//struct Son : public Mom {
//    int z;
//
//    void h() {
//        f();
//        std::cout << 3;
//    }
//};

//struct A {
//    friend void call_foo(const A&);
//
//private:
//    int x;
//    void foo() const {
//        std::cout << 1;
//    }
//
//    void h() {
//        return;
//    }
//};
//
//void call_foo(const A& a) {
//    a.foo();
//    a.x;
//}

//struct A {
//    void h() {
//        return;
//    }
//};
//
//struct B {
//    void h() {
//        return;
//    }
//};

//class Person {
//public:
//    Person(std::string name) {
//        this->name = name;
//    }
//
//    virtual void print() const {
//        std::cout << "Name: " << name << std::endl;
//    }
//
//protected:
//    std::string name;
//};
//
//class Employee : public Person {
//public:
//    Employee(std::string name, std::string company) : Person(name) {
//        this->company = company;
//    }
//
//    void print() const {
//        Person::print();
//        std::cout << "Company: " << company << std::endl;
//    }
//
//private:
//    std::string company;
//};

//struct Base {
//    virtual void f() {
//        std::cout << 1;
//    }
//};
//
//struct Derived : Base {
//    void f() override {
//        std::cout << 2;
//    }
//};

struct Base {
    virtual void f() = 0;
    virtual void h() = 0;
    virtual void v() = 0;
};

struct Derived : Base {
    void f() override {
        std::cout << 1;
    }

    void h() override {
        std::cout << 2;
    }

    void v() override {
        std::cout << 3;
    }
};

int main() {
    Derived d;
    d.f();
    d.h();
    d.v();

    //Person p1("John");
    //Employee e1("Bob", "Samsung");

    //std::vector<Person*> persons;

    //persons.push_back(&p1);
    //persons.push_back(&e1);
    //persons.push_back(&e1);
    //persons.push_back(&e1);

    //e1.Employee::print();

    //A a;
    //a.h();

    //Son n;
    //n.h();

    //E e = E::Red;

    //std::cout << static_cast<uint8_t>(e);

    return 0;
}

//enum class E : uint8_t {
//    Red = 1,
//    Green,
//    Blue
//};

//struct Base // Базовый класс
//{
//    // friend class Derived;
//
//    int x;
//
//    void f() {
//        std::cout << 1;
//    }
//};
//
//struct Derived : protected Base { // Производный класс, Derived наследник Base
//    int y;
//
//private:
//    void g() {
//        std::cout << 2;
//    }
//};
//
//struct A : protected Derived {
//    void w() {
//        return;
//    }
//};

