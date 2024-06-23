#include<iostream>
using namespace std;
class Distance{
    int feet;
    float inch;
    public:
    Distance(int f, int i):feet(f), inch(i){}
    operator float();
    void dispaly(){
        cout <<"Feet :- "<<feet<<"\t inches:- "<<inch;
    }
};
 Distance:: operator  float()
    {
        float m;
        float totalinch= feet*12+ inch;
        m=totalinch/39.3701;
        return m;
    }
int main(){
    Distance d1(3,3.78);
    float m;
   // cin>>m;
    m=d1;
    cout <<"Total distance in meter :-"<<m;
return 0;
}