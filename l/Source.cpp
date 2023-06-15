#include <iostream>
#include <cstdlib>
using namespace std; 

int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int findMax(const int arr[][3], int rows, int cols) {
    int maxVal = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}

int findMax(const int arr[][3][2], int dim1, int dim2, int dim3) {
    int maxVal = arr[0][0][0];
    for (int i = 0; i < dim1; ++i) {
        for (int j = 0; j < dim2; ++j) {
            for (int k = 0; k < dim3; ++k) {
                if (arr[i][j][k] > maxVal) {
                    maxVal = arr[i][j][k];
                }
            }
        }
    }
    return maxVal;
}

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int findMax(int a, int b, int c) {
    return findMax(findMax(a, b), c);
}

int main() {

    int arr[] = { 5, 3, 9, 1, 7 };
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int maxVal1 = findMax(arr, arrSize);
    cout << "Max value in 1D array: " << maxVal1 << endl;

    int arr2D[][3] = { {2, 7, 4}, {9, 1, 5}, {6, 3, 8} };
    int rows = sizeof(arr2D) / sizeof(arr2D[0]);
    int cols = sizeof(arr2D[0]) / sizeof(arr2D[0][0]);
    int maxVal2 = findMax(arr2D, rows, cols);
    cout << "Max value in 2D array: " << maxVal2 << endl;

    int arr3D[][3][2] = {
        {{3, 9}, {2, 6}, {5, 1}},
        {{7, 4}, {8, 3}, {6, 2}}
    };
    int dim1 = sizeof(arr3D) / sizeof(arr3D[0]);
    int dim2 = sizeof(arr3D[0]) / sizeof(arr3D[0][0]);
    int dim3 = sizeof(arr3D[0][0]) / sizeof(arr3D[0][0][0]);
    int maxVal3 = findMax(arr3D, dim1, dim2, dim3);
    cout << "Max value in 3D array: " << maxVal3 << endl;

    int a = 8, b = 3;
    int maxVal4 = findMax(a, b);
    cout << "Max value of " << a << " and " << b << ": " << maxVal4 << endl;

    int x = 5, y = 9, z = 2;
    int maxVal5 = findMax(x, y, z);
    cout << "Max value of " << x << ", " << y << ", and " << z << ": " << maxVal5 << endl;

    system("pause>nul");
    return 0;
}
