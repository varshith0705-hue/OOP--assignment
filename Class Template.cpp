#include <iostream>
using namespace std;

template <class T>
class Display {
    T data;
public:
    Display(T d) {
        data = d;
    }
    void show() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    Display<int> obj1(10);
    Display<string> obj2("Hello");

    obj1.show();
    obj2.show();

    return 0;
}
