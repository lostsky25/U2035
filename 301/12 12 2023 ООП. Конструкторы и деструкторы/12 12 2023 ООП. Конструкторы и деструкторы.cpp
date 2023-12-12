#include <iostream>
#include <vector>

//struct Pixel {
//    unsigned r;
//    unsigned g;
//    unsigned b;
//    unsigned a;
//};
//
//class Page {
//public:
//
//private:
//    std::vector<std::vector<Pixel>> data;
//};

class Human {
public:
    Human(std::string name) {
        std::cout << "Constructor\n";
        this->name = name;
        this->age = 0;
        this->height = 0;
        this->weight = 0;
    }

    Human(std::string name, unsigned age) : Human(name) {
        this->age = age;

        data = new int[10];
    }

    Human(const Human& human) {
        std::cout << "Copy\n";
        name = human.name;
        height = human.height;
        age = human.age;
        weight = human.weight;
    }

    void setName(std::string name) {
        this->name = name;
    }

    std::string getName() const {
        return name;
    }

    ~Human() {
        std::cout << "Destructor\n";
        delete[] data;
    }

private:
    std::string name;
    unsigned height;
    unsigned age;
    unsigned weight;

    int* data;
};

class Car
{
public:
    /*static std::string getColor() {
        return color;
    }*/

private:
    int weight;
    int hp;
};

int main() {
    Human h1("Rob", 20);
    
    Human h2(h1);


    //std::cout << Car::getColor();

    //const Human human1("Rob", 20);

    //std::cout << human1.getName();

    //Human human2;

    /*human2.setName("John");

    std::cout << '\n' << &human1 << std::endl;
    std::cout << &human2 << std::endl;*/

    return 0;
}