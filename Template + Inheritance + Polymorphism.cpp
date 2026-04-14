#include <iostream>
using namespace std;

// Template Base Class
template <class T>
class Shape {
public:
    virtual T area() = 0; // pure virtual function
};

// Derived class: Rectangle
template <class T>
class Rectangle : public Shape<T> {
    T length, width;

public:
    Rectangle(T l, T w) {
        length = l;
        width = w;
    }

    T area() {
        return length * width;
    }
};

// Derived class: Circle
template <class T>
class Circle : public Shape<T> {
    T radius;

public:
    Circle(T r) {
        radius = r;
    }

    T area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Shape<float>* s1;
    Shape<float>* s2;

    Rectangle<float> rect(5.5, 4.0);
    Circle<float> circ(3.0);

    s1 = &rect;
    s2 = &circ;

    cout << "Rectangle Area: " << s1->area() << endl;
    cout << "Circle Area: " << s2->area() << endl;

    return 0;
}
