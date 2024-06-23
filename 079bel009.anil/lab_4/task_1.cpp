#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
   
    Complex(int r , int i) : real(r), imag(i) {}

    void display()  {
        cout << real << " + " << imag << "i" << endl;
    }

   
    Complex add( Complex c) {
   
        this->real += c.real;
        this->imag += c.imag;

        return *this;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);

    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();

    Complex result = c1.add(c2);

    cout << "Sum of complex numbers: ";
    result.display();

    return 0;
}
