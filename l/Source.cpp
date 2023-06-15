#include <iostream>
#include <cstdlib>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    int result = power(base, exponent);
    cout << "Result: " << result << endl;

    system("pause>nul");
    return 0;
}
