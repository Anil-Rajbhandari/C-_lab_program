#include<iostream>
using namespace std;
int main()
{
	int a, temp,rem,sum=0;
	cout<<"Enter any number:-";
	cin>>a;
	temp=a;
	while(a!=0){
		rem =a%10;
		sum=sum*10 +rem;
		a=a/10;
	}
	if (temp==sum)
	{
		cout<<"The number is palindrom";
	}
	else
	{
		cout<<"The number is not palindrom";
	}
	return 0;
}
