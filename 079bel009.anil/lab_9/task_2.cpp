#include <iostream>
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }

    T subtract(T a, T b) {
        return a - b;
    }

    T multiply(T a, T b) {
        return a * b;
    }

    T divide(T a, T b) {
        if (b == 0) {
            throw runtime_error("Division by zero");
        }
        return a / b;
    }
};

int main() {
    Calculator<int> intCalc;
    Calculator<double> doubleCalc;

    cout << "Int addition: " << intCalc.add(5, 3) << endl;
    cout << "Double division: " << doubleCalc.divide(5.5, 2.2) << endl;

    try {
        cout << "Double division by zero: " << doubleCalc.divide(5.5, 0) << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
