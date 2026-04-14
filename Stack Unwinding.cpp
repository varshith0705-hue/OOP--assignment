#include <iostream>
using namespace std;

class Test {
public:
    Test() { cout << "Constructor called\n"; }
    ~Test() { cout << "Destructor called\n"; }
};

void func() {
    Test t;
    throw "Exception in function!";
}

int main() {
    try {
        func();
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}
