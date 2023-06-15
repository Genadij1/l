#include <iostream>
#include <cstdlib>
using namespace std;

int sumInRange(int a, int b) {
    if (a == b) {
        return a;
    }
    return a + sumInRange(a + 1, b);
}

int main() {
    int a, b;
    cout << "Enter the starting number (a): ";
    cin >> a;
    cout << "Enter the ending number (b): ";
    cin >> b;

    int sum = sumInRange(a, b);

    cout << "Sum of numbers from " << a << " to " << b << " is: " << sum << endl;

    return 0;
}