#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
  Complex():real(0), imag(0){}
    Complex(int r, int  i ) : real(r), imag(i) {}

    friend Complex add( Complex c1,  Complex c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex add( Complex c1,  Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    Complex c1(3, 4),c2(1, 2);
    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    
    Complex result = add(c1, c2);
    cout << "Sum of complex numbers: ";
    result.display();
    return 0;
}
