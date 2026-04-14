#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Int: " << add(5, 3) << endl;
    cout << "Float: " << add(2.5, 1.5) << endl;
    return 0;
}
