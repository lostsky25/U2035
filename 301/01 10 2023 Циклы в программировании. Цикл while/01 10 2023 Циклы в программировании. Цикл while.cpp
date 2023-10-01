#include <iostream>

//void sum(int a, int b, int* result) {
//    *result = a + b;
//}

void getAvg(int* arr, const int size, int* result) {
    for (int i = 0; i < size; i++)
    {
        *result += arr[i];
    }
    *result /= size;
}

int main() {

    const int SIZE = 10;
    int result = 0;

    int* arr = new int[SIZE];

    for (int i = 0; i < SIZE; i++)
        arr[i] = i * i;

    getAvg(arr, SIZE, &result);

    std::cout << "AVG: " << result;

    //for (int i = 0; i < SIZE; i++)
    //    std::cout << arr[i] << ' ';

    delete[] arr;

  /*  int answer = 0;

    int a = 5;
    int b = 6;

    sum(a, b, &answer);
  */  
    // 1
    //const char str[] = "abc";
    
    // 2
    //const char* str = "abc";

    // 3
    //char str[] = {'a', 'b', 'c', '\0'};
    
    // 4
    //const char str[4] = "abc";

    // std::cout << strlen(str);

    // std::cout << strcmp("aBc", "abc");

    //const std::string passwd = "abc";

    //std::string temp;
    //std::cin >> temp;

    //if (strcmp(passwd.c_str(), temp.c_str()) == 0) {
    ////if (passwd == temp) {

    //}

    //int* a_ptr = new int;

    //*a_ptr = 10;
    //*a_ptr = 20;
    //
    //std::cout << "Addr: 0x" << a_ptr << std::endl;
    //std::cout << "Value: " << *a_ptr << std::endl;

    //delete a_ptr;

    /*while (true)
    {
        new int;
    }*/


    return 0;
}