#include<iostream>
using namespace std;

void add(const int &n1,const int &n2,int &sum){
    sum=n1+n2;
}
int main(){
    int a=10,b=30;
    int s;
    add(a,b,s);
    cout<<"The sum of two number is :-"<<s;
    return 0;
}
