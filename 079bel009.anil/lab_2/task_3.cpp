#include<iostream>
using namespace std;
int  &grater(int &n1,int &n2)
{

    if(n1>n2){
        return n1;
    }
    else{
        return n2;
    }
}
int main(){
    int a=30,b=50;
    cout<<"Before calling function \n";
    cout <<"a= "<<a<<"\t b= "<<b<<endl;
    cout<<"After calling function \n";
    grater(a,b)=500;
    cout <<"a= "<<a<<"\t b= "<<b<<endl;
}
