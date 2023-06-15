#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int findMinSumPosition(int arr[], int startPos, int currPos, int minSum, int currSum) {
    if (currPos >= startPos + 10) {
        return startPos;
    }

    int newSum = currSum - arr[currPos - 1] + arr[currPos + 9];
    if (newSum < minSum) {
        minSum = newSum;
        startPos = currPos;
    }

    return findMinSumPosition(arr, startPos, currPos + 1, minSum, newSum);
}

int main() {
    const int SIZE = 100;
    int arr[SIZE];

    srand(time(nullptr));
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 100;
    }

    int startPos = findMinSumPosition(arr, 0, 0, INT_MAX, 0);
    cout << "Position of the sequence with minimum sum: " << startPos << endl;

    return 0;
}
