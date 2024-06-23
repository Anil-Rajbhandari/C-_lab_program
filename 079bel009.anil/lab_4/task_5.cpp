#include <iostream>
using namespace std;

class ClassA;  
class ClassB {
private:
    int dataB;

public:
    ClassB(int b = 0) : dataB(b) {}

    friend int sumData(const ClassA& a, const ClassB& b);
};

class ClassA {
private:
    int dataA;

public:
    ClassA(int a = 0) : dataA(a) {}

    friend int sumData(const ClassA& a, const ClassB& b);
};

int sumData(const ClassA& a, const ClassB& b) {
    return a.dataA + b.dataB;
}

int main() {
    ClassA objA(5);
    ClassB objB(10);

    int result = sumData(objA, objB);

    cout << "Sum of data members: " << result << endl;

    return 0;
}
