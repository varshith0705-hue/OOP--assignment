#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    try {
        if (choice == 1)
            throw 10;          // int exception
        else if (choice == 2)
            throw 3.14;        // double exception
        else
            throw "Invalid choice"; // string exception
    }
    catch (int x) {
        cout << "Integer exception: " << x << endl;
    }
    catch (double y) {
        cout << "Double exception: " << y << endl;
    }
    catch (const char* msg) {
        cout << "String exception: " << msg << endl;
    }

    return 0;
}
