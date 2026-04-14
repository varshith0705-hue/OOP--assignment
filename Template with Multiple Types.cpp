#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max int: " << maximum(10, 20) << endl;
    cout << "Max char: " << maximum('A', 'Z') << endl;
    return 0;
}
