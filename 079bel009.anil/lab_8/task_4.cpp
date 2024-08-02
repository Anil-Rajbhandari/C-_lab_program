#include <iostream>
using namespace std;

class Shape {
public:
    virtual void display() {
        cout << "This is a Shape." << endl;
    }
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void display() override {
        cout << "This is a Circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void display() override {
        cout << "This is a Rectangle." << endl;
    }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();

    cout << "Type of s1: " << typeid(*s1).name() << endl;
    cout << "Type of s2: " << typeid(*s2).name() << endl;

    if (dynamic_cast<Circle*>(s1)) {
        cout << "s1 points to a Circle." << endl;
    } else {
        cout << "s1 does not point to a Circle." << endl;
    }

    if (dynamic_cast<Rectangle*>(s2)) {
        cout << "s2 points to a Rectangle." << endl;
    } else {
        cout << "s2 does not point to a Rectangle." << endl;
    }

    delete s1;
    delete s2;
    return 0;
}
