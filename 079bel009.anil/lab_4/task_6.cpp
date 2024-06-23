#include <iostream>
using namespace std;

class ClassB; 
class ClassA {
private:
    int dataA;

public:
   
    ClassA(int a = 0) : dataA(a) {}

    friend class FriendClass;
};

class ClassB {
private:
    int dataB;

public:
   
    ClassB(int b = 0) : dataB(b) {}

   
    friend class FriendClass;
};

class FriendClass {
public:
   
    int sumData(const ClassA& a, const ClassB& b) {
        return a.dataA + b.dataB;
    }
};

int main() {
  
    ClassA objA(5);
    ClassB objB(10);

    FriendClass friendObj;

    int result = friendObj.sumData(objA, objB);

    cout << "Sum of data members: " << result << endl;

    return 0;
}
