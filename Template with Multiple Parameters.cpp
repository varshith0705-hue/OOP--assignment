#include <iostream>
using namespace std;

template <class T1, class T2>
void display(T1 a, T2 b) {
    cout << "Values: " << a << " , " << b << endl;
}

int main() {
    display(10, 20.5);
    display('A', "Template");

    return 0;
}

