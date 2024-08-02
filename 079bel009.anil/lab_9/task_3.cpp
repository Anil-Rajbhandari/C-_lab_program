#include <iostream>
#include <stdexcept>
using namespace std;

void testException(int value) {
    try {
        if (value == 0) {
            throw runtime_error("Runtime error: value is zero");
        } else if (value < 0) {
            throw invalid_argument("Invalid argument: value is negative");
        } else {
            cout << "Value is valid: " << value << endl;
        }
    } catch (const runtime_error& e) {
        cerr << "Caught runtime_error: " << e.what() << endl;
    } catch (const invalid_argument& e) {
        cerr << "Caught invalid_argument: " << e.what() << endl;
    } catch (...) {
        cerr << "Caught an unexpected exception" << endl;
    }
}

int main() {
    testException(10);
    testException(0);
    testException(-5);

    return 0;
}
