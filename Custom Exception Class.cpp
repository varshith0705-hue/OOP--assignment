#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
public:
    const char* what() const noexcept override {
        return "Custom Exception: Number must be positive!";
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num < 0)
            throw MyException();
        cout << "You entered: " << num << endl;
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
