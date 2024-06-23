#include <iostream>
#include <cmath>
 using namespace std;
 class Polar;
 class Cartesian{
    float x,y;
    public:
    Cartesian(float a, float b):x(a),y(b){}
    void display(){
        cout <<"x ="<<x<<"\ny = "<<y<<endl;
    }
   operator Polar();
 };
 class Polar{
    float r,a;
    public:
    Polar(float c, float d):r(c), a(d){}
    void display(){
    cout<<"Radius:- "<<r<<"\t Angle :-"<<a;
    }
 };
 Cartesian::operator Polar(){
        float r = sqrt(x*x+y*y);
        float a = atan2(y,x);
        return Polar(r,a);
    }
     int main(){
        Cartesian c(2,2);
        Polar p=c;
        p.display();
        return 0;
    }