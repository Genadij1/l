#include <iostream>
#include <cstdlib>
using namespace std;

void printStars(int n) {
    if (n == 0) {
        return;
    }
    cout << "* ";
    printStars(n - 1);
}

int main() {
    int N;
    std::cout << "Enter the number of stars: ";
    std::cin >> N;

    printStars(N);

    system("pause>nul");
    return 0;
}
