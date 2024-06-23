#include <iostream>
using namespace std;

class Test {
    int num;
    static int count;

public:

    Test() {
        num = ++count;
        cout << "Object " << num << " created" << endl;
    }
    ~Test() {
        cout << "Object " << num << " goes out of scope" << endl;
        --count;
    }
    static int getCount() {
        return count;
    }
};


int Test::count = 0;

void createObjects() {
    Test obj3;
    Test obj4;
}

int main() {
    cout << "Initial object count: " << Test::getCount() << endl;

    Test obj1;
    cout << "Current object count: " << Test::getCount() << endl;

    {
        Test obj2;
        cout << "Current object count: " << Test::getCount() << endl;
    } 

    cout << "Current object count after block: " << Test::getCount() << endl;

    createObjects();

    cout << "Current object count after function call: " << Test::getCount() << endl;

    return 0;
} 


