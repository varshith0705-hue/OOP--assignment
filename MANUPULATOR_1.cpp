#include <iostream>
#include <iomanip>  // for setw, setfill, setprecision

using namespace std;

int main() {
    double pi = 3.1415926535;

    cout << "Formatted Table:" << endl;

    // Line using '-'
    cout << setfill('-') << setw(20) << "-" << endl;

    // Reset fill to space
    cout << setfill(' ');

    // Header
    cout << left << setw(10) << "Constant"
         << right << setw(10) << "Value" << endl;

    // Data
    cout << left << setw(10) << "Pi"
         << right << setw(10) << fixed << setprecision(2) << pi << endl;

    return 0;
}
