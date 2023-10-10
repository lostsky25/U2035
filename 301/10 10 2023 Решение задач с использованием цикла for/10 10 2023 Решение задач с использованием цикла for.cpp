#include <iostream>
#include <vector>

//int sum(int a = 2, int b = 10) {
//    return a + b;
//}

// int -2147483648 to 2147483647
// short -32768 to 32767
// float <- double 

void hello() {
    std::cout << "hello\n";
    return;
    std::cout << "world\n";
}

int foo(int state) {
    std::cout << "Start\n";

    if (state == 1) {
        std::cout << "YES\n";
        return 1;
    }
    else {
        std::cout << "NO\n";
        return 2;
    }

    std::cout << "Finish\n";

    return 0;
}

int foo2(int a) {
    return a++;
}

int foo3(int a) {
    return ++a;
}

int main() {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    std::cout << "Size: " << arr.size() << std::endl;
    std::cout << "Last element: " << arr.back() << std::endl;
    std::cout << "First element: " << arr.front() << std::endl;
    std::cout << "Remove the last: " << std::endl;
    arr.pop_back();

    std::cout << *(arr.data()) << std::endl;
    std::cout << *(arr.data() + 1) << std::endl;
    std::cout << *(arr.data() + 2) << std::endl;
    std::cout << *(arr.data() + 3) << std::endl;

    //int b = foo3(2);
    //std::cout << b << std::endl;

    //std::cout << foo(0);

    //std::cout << (int)sum(7, 5) << std::endl;
    //std::cout << (short)sum(7, 5) << std::endl;
    //std::cout << (double)sum(7, 5) << std::endl;
    //
    //std::cout << int(sum(7, 5)) << std::endl;
    //std::cout << short(sum(7, 5)) << std::endl;
    //std::cout << double(sum(7, 5)) << std::endl;

    //std::cout << static_cast<int>(sum(7, 5)) << std::endl;
    //std::cout << static_cast<short>(sum(7, 5)) << std::endl;
    //std::cout << static_cast<double>(sum(7, 5)) << std::endl;

    //auto var1 = (short)1;
    //auto var2 = short(1);
    //auto var3 = static_cast<int>(1ull);

    //std::cout << "var1: " << typeid(var1).name() << std::endl;
    //std::cout << "var2: " << typeid(var2).name() << std::endl;
    //std::cout << "var3: " << typeid(var3).name() << std::endl;

    //short b = 32767;
    //int a = b;
    //std::cout << typeid(a).name() << std::endl;
    //std::cout << "type sum: " << typeid(sum(2, 3)).name() << std::endl;

    //std::cout << "3ll + 3.0f: " << typeid(3ll + 3.0f).name() << std::endl;
    //std::cout << "3ll + 3.0: " << typeid(3ll + 3.0).name() << std::endl;
    //std::cout << "1ull + 3u: " << typeid(1ull + 3u).name() << std::endl;
    //std::cout << "1.0f + 3.0: " << typeid(1.0f + 3.0).name() << std::endl;
   

    /*std::cout << sum() << std::endl;
    std::cout << sum(3) << std::endl;
    std::cout << sum(3, 20);*/
    
    /*std::vector<int> arr = { 5, 9, 12, 3, 0, -4, 2, 1 };
    std::vector<int> pref(arr.size() + 1, 0);

    pref[0] = 0;
    for (int i = 1; i < pref.size(); i++) {
        pref[i] = arr[i - 1] + pref[i - 1];
    }

    int l = 2;
    int r = 5;
    
    std::cout << pref[r + 1] - pref[l];*/

    return 0;
}