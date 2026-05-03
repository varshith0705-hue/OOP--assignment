#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(3, 4) << endl;
    cout << add(2.5, 1.5) << endl;
    return 0;
}
