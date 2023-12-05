#include <iostream>

//void inc(int* ptr) {
//    *ptr += 1;
//}

//void inc(int& ref_a) {
//    ref_a++;
//}

//void getRand(int min, int max, int& res) {
//    srand(time(0));
//    res = min + (rand() % (max - min + 1));
//}

//struct Point {
//    int x;
//    int y;
//    int z;
//};

//Point getRandPoint(int min, int max) {
//    srand(time(0));
//
//    Point tmp_p;
//    tmp_p.x = min + (rand() % (max - min + 1));
//    tmp_p.y = min + (rand() % (max - min + 1));
//    tmp_p.z = min + (rand() % (max - min + 1));
//
//    return tmp_p;
//}

//void getRandPoint(int min, int max, Point& res) {
//    srand(time(0));
//
//    res.x = min + (rand() % (max - min + 1));
//    res.y = min + (rand() % (max - min + 1));
//    res.z = min + (rand() % (max - min + 1));
//}

//void getRandPoint(int min, int max, Point* res) {
//    srand(time(0));
//
//    (*res).x = min + (rand() % (max - min + 1));
//    (*res).y = min + (rand() % (max - min + 1));
//    (*res).z = min + (rand() % (max - min + 1));
//}

int main() {
    /*Point res;

    getRandPoint(-20, 20, &res);

    std::cout << "x: " << res.x << " y: " << res.y << " z: " << res.z << std::endl;*/

    //Point p1 = getRandPoint(-20, 20);
    //Point p2 = getRandPoint(-500, 500);
    //Point p3 = getRandPoint(100, 1000);

    //std::cout << "x: " << p1.x << " y: " << p1.y << " z: " << p1.z << std::endl;
    //std::cout << "x: " << p2.x << " y: " << p2.y << " z: " << p2.z << std::endl;
    //std::cout << "x: " << p3.x << " y: " << p3.y << " z: " << p3.z << std::endl;

    //Point p1 = { 10, 20 };
    /*
        Point p1;
        p1.x = 10;
        p1.y = 20;
    */

    //int res = 0;
    //getRand(20, 25, res);

    //std::cout << res << std::endl;

    //std::cout << "time(0): " << time(0) << std::endl;
    //srand(time(0));

    //std::cout << rand() % 100 << std::endl;


    //int a = 10;

    //inc(a);

    //std::cout << a << std::endl;


    //int* ptr = &a;

    // x64 (x86_64) -> sizeof(pointer) = 8 bytes
    // x86 (x86_32) -> sizeof(pointer) = 4 bytes

    /*std::cout << "sizeof(ptr): " << sizeof(ptr) << " bytes " << sizeof(ptr) * 8 << " bit." << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << " bytes " << sizeof(int) * 8 << " bit." << std::endl;

    inc(&a);
    std::cout << a << std::endl;*/

    return 0;
}
