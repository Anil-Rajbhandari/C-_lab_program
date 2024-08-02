#include <iostream>

using namespace std;

class Shape {
public:
    virtual void area() = 0;  // Pure virtual function
    virtual void display() {
        cout << "This is a shape." << endl;
    }
    virtual ~Shape() {}  // Virtual destructor
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
    void display() override {
        cout << "This is a Circle." << endl;
    }
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    void area() override {
        cout << "Area of Rectangle: " << width * height << endl;
    }
    void display() override {
        cout << "This is a Rectangle." << endl;
    }
};

class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void area() override {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
    void display() override {
        cout << "This is a Triangle." << endl;
    }
};

int main() {
    Shape* s;
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 7);

    s = &c;
    s->display();
    s->area();
    
    s = &r;
    s->display();
    s->area();
    
    s = &t;
    s->display();
    s->area();
    
    return 0;
}
