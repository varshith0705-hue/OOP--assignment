#include <iostream>
using namespace std;

void checkAge(int age) {
    if (age < 18)
        throw age;
    cout << "Access granted!" << endl;
}

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        checkAge(age);
    }
    catch (int a) {
        cout << "Access denied. Age: " << a << endl;
    }

    return 0;
}
