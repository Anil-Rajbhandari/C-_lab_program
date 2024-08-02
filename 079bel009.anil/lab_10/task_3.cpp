#include <iostream>
using namespace std;

class Time {
public:
    int hour, minute, second;

    friend istream& operator>>(istream& in, Time& t);
    friend ostream& operator<<(ostream& out, const Time& t);
};

istream& operator>>(istream& in, Time& t) {
    cout << "Enter hours: ";
    in >> t.hour;
    cout << "Enter minutes: ";
    in >> t.minute;
    cout << "Enter seconds: ";
    in >> t.second;
    return in;
}

ostream& operator<<(ostream& out, const Time& t) {
    out << (t.hour < 10 ? "0" : "") << t.hour << ":"
        << (t.minute < 10 ? "0" : "") << t.minute << ":"
        << (t.second < 10 ? "0" : "") << t.second;
    return out;
}

int main() {
    Time t;
    cin >> t;
    cout << "The time is: " << t << endl;
    return 0;
}
