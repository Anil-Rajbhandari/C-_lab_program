#include <iostream>
using namespace std;

class test {
private:
    int value;

public:
    
    test(int v) : value(v) {}

    void setValue(int v) {
        value = v;
    }

    int getValue() const {
        return value;
    }

    void display() {
        cout << "Non-const display: Value = " << value << endl;
    }

    void display() const {
        cout << "Const display: Value = " << value << endl;
    }
};

int main() {
   test obj1(10);
    cout << "Non-constant object operations:" << endl;
    obj1.display();      obj1.setValue(20);
    cout << "After setting new value: ";
    obj1.display();      

    const test obj2(30);
    cout << "\nConstant object operations:" << endl;
    obj2.display();      cout << "Value through constant member function: " << obj2.getValue() << endl;

    return 0;
}
