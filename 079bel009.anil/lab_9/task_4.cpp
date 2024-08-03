#include <iostream>
//#include <stdexcept>
using namespace std;

template <typename T>
class Stack {
private:
    static const int maxSize = 100;
    T arr[maxSize];
    int top;
public:
    Stack() : top(-1) {}

    void push(T value) {
        if (top >= maxSize - 1) {
            throw overflow_error("Stack overflow");
        }
        arr[++top] = value;
    }

    T pop() {
        if (top < 0) {
            throw underflow_error("Stack underflow");
        }
        return arr[top--];
    }

    T peek() {
        if (top < 0) {
            throw underflow_error("Stack underflow");
        }
        return arr[top];
    }

    bool isEmpty() {
        return top < 0;
    }
};

int main() {
    Stack<int> intStack;

    try {
        intStack.push(10);
        intStack.push(20);
        cout << "Top element: " << intStack.peek() << endl;
        cout << "Popped element: " << intStack.pop() << endl;
        cout << "Popped element: " << intStack.pop() << endl;
        cout << "Popped element: " << intStack.pop() << endl; // This will throw an exception
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
