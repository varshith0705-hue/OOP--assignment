#include <iostream>
using namespace std;

int main() {
    try {
        throw 1.5;
    }
    catch(int i) {
        cout << "Int";
    }
    catch(double d) {
        cout << "Double";
    }
}
