#include <iostream>

//struct Car {
//public:
//    void setX(int x) {
//        m_x = x;
//    }
//
//    void setY(int y) {
//        m_y = y;
//    }
//
//    int getX() {
//        return m_x;
//    }
//
//    int getY() {
//        return m_y;
//    }
//
//    void setHP(int hp) {
//        if (hp > 0 && hp <= 1000) {
//            m_hp = hp;
//        }
//        else {
//            m_hp = 50;
//        }
//    }
//
//    int getHP() {
//        return m_hp;
//    }
//
//private:
//    int m_x;
//    int m_y;
//    int m_hp;
//};

//void foo() {
//    //int a = 10, b = 20, c = 30;
//
//    //std::cout << "0x" << &a << std::endl;
//    //std::cout << "0x" << &b << std::endl;
//    //std::cout << "0x" << &c << std::endl;
//
//    //int* a = new int, * b = new int, * c = new int;
//
//    //std::cout << "0x" << a << std::endl;
//    //std::cout << "0x" << b << std::endl;
//    //std::cout << "0x" << c << std::endl;
//
//    //delete a;
//    //delete b;
//    //delete c;
//}

//#define ERR_ALLOC_MEM 1

int main() {
    //Car* car = new Car;

    //std::cout << "sizeof(car): " << sizeof(*car) << std::endl;

    //car->setX(10);
    //car->setY(20);
    //car->setHP(100000);

    //std::cout << car->getX() << ' ' << car->getY() << std::endl;
    //std::cout << car->getHP() << " hp" << std::endl;

    //delete car;

    //const int rows = 3;
    //const int cols = 5;

    //int** arr = (int**)malloc(rows * sizeof(int*));

    //if (arr == nullptr) {
    //    return ERR_ALLOC_MEM;
    //}

    //for (size_t i = 0; i < rows; i++) {
    //    arr[i] = (int*)malloc(cols * sizeof(int));

    //    if (arr[i] == nullptr) {
    //        return ERR_ALLOC_MEM;
    //    }
    //}

    //for (size_t i = 0; i < rows; i++) {
    //    for (size_t j = 0; j < cols; j++) {
    //        arr[i][j] = i + j;

    //        std::cout << arr[i][j] << ' ';
    //    }
    //    std::cout << std::endl;
    //}

    //for (size_t i = 0; i < rows; i++) {
    //    free(arr[i]);
    //}
    //free(arr);

    //Point* a_point = (Point*)malloc(sizeof(Point));
    //Point* b_point = new Point;

    //a_point->x = 10;
    //a_point->y = 20;

    //b_point->x = 10;
    //b_point->y = 20;

    //free(b_point);
    //delete a_point;

    //free(a_point);
    //delete b_point;

    //while (true) {
    //    free(malloc(1024));

    //}

    //std::cout << sizeof(int*) << std::endl;
    //std::cout << sizeof(double*) << std::endl;

    //const int sz = 10;
    //int* arr = (int*)malloc(sz * sizeof(int));
    ////int* arr = (int*)calloc(sz, sizeof(int));

    ////for (int i = 0; i < sz; i++) {
    ////    std::cout << *(arr + i) << std::endl;
    ////}

    //if (arr == nullptr) {
    //    std::cerr << "Error: 1\n";
    //    // stdin
    //    // stdout
    //    // stderr
    //    return 1;
    //}

    //for (int i = 0; i < sz; i++) {
    //    *(arr + i) = i + 1;
    //    //std::cout << *(arr + i) << std::endl;
    //}

    //arr = (int*)realloc(arr, sz * 2 * sizeof(int));

    //if (arr == nullptr) {
    //    std::cerr << "Error: 1\n";
    //    // stdin
    //    // stdout
    //    // stderr
    //    return 1;
    //}

    //for (int i = 0; i < sz * 2; i++) {
    //    *(arr + i) = i + 1;
    //    std::cout << *(arr + i) << std::endl;
    //}

    //free(arr);

    return 0;
}