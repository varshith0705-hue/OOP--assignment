#include <iostream>
using namespace std;

int main() {
    try {
        try {
            throw 20;
        }
        catch (int x) {
            cout << "Inner catch: " << x << endl;
            throw; // rethrow
        }
    }
    catch (int y) {
        cout << "Outer catch: " << y << endl;
    }

    return 0;
}
