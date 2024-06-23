#include <iostream>
#include <cmath>
 using namespace std;
 class Polar;
 class Cartesian{
    float x,y;
    public:
    Cartesian(float a, float b):x(a),y(b){}
   float getx(){
        return x;
    }
    float gety(){
        return y;
    }
    void display(){
        cout <<"x ="<<x<<"\ny = "<<y<<endl;
    }
 };
 class Polar{
    float r,a;
    public:
    Polar(float c, float d):r(c), a(d){}
    void display(){
    cout<<"Radius:- "<<r<<"\t Angle :-"<<a;
    }
    Polar( Cartesian c){
         r = sqrt(c.getx() * c.getx() + c.gety() * c.gety());
         a = atan2(c.gety() , c.getx());
    }
 }; 


    int main(){

        Cartesian c(2,2);
        Polar p=c;
        p.display();
        return 0;
    }