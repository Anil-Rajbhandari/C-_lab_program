#include<iostream>
using namespace std;
int swap(int *a ,int *b )
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main ()
{
	int x,y;
	cout<<"Enter any two number 'x' and 'y'";
	cin>>x>>y;
	swap(&x,&y);
	cout<<"x="<<x<<endl<<"y="<<y;
	return 0;
}
