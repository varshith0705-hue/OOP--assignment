#include <iostream>
using namespace std;

int main() {
    try {
        throw 'A';
    }
    catch(...) {
        cout << "Caught all";
    }
}
