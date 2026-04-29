#include <iostream>
using namespace std;

int main() {
    double val = 123.45678;

    // Set width and fill character
    cout.width(10);
    cout.fill('*');
    cout << 100 << endl;

    // Set precision (significant digits here)
    cout.precision(4);
    cout << val << endl;

    // Show positive sign and fixed decimal format
    cout.setf(ios::showpos);
    cout.setf(ios::fixed, ios::floatfield);
    cout << 50.5 << endl;

    return 0;
}
