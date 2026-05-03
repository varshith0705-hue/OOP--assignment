#include <iostream>
using namespace std;

template <class T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    cout << multiply(3, 5);
    return 0;
}
