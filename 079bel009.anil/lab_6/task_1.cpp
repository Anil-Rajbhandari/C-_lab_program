#include<iostream>
using namespace std;
class Distance{
    int feet;
    float inch;
    public:
    Distance():feet(0), inch(0){}
    Distance(float m){
        float totalinch= m *39.3701;
        feet = totalinch / 12;
        inch = totalinch -feet*12;
    }
    void dispaly(){
        cout <<"Feet :- "<<feet<<"\t inches:- "<<inch;
    }
};
int main(){
    Distance d1;
    float m;
    cout <<"Enter distance in meter:-";
    cin>>m;
    d1 =m;
    d1.dispaly();
return 0;
}