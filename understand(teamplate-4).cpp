#include <iostream>
using namespace std;

template <class T>
class Test {
public:
    T value;
    Test(T v) { value = v; }
    void show() { cout << value; }
};

int main() {
    Test<int> obj(5);
    obj.show();
    return 0;
}
