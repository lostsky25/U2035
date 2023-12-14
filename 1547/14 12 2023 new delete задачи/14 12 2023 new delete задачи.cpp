#include <iostream>

__forceinline void fill2d(int** arr, int rows, int cols, int value) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = value;
        }
    }
}

__forceinline void print2d(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        putchar('\n');
    }
}

int main() {


    //int n, m, k;
    //std::cin >> n >> m >> k;

    //int** arr = new int*[n + k];

    //for (int i = 0; i < n + k; i++) {
    //    arr[i] = new int[m + k];
    //}

    //fill2d(arr, n + k, m + k, 0);

    //for (int c = 0; c <= k; c++) {
    //    print2d(arr, n + c, m + c);

    //    system("cls");
    //}

    //for (int i = 0; i < n + k; i++) {
    //    delete[] arr[i];
    //}
    //delete[] arr;

    //srand(time(0));

    //int n;
    //std::cin >> n;

    //char* ptr = new char[n];

    //for (int i = 0; i < n; ++i) {
    //    ptr[i] = rand() % 127;
    //}

    //double answ = 0.0;

    //for (int i = 0; i < n; ++i) {
    //    answ += ptr[i];
    //}

    //answ /= n;

    //delete[] ptr;

    //std::cout << "AVG: " << answ << std::endl;

    return 0;
}
