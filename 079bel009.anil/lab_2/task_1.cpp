#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;

}
int main(){
    int x=10,y=20;
    cout<<"Before swap \n"<<"x=" <<x<<endl <<"y="<<y<<endl;
    swap(x,y);
    cout<<"After swap \n"<<"x=" <<x<<endl <<"y="<<y<<endl;
}

