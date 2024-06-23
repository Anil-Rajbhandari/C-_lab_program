#include<iostream>
using namespace std;

class complex{
	int real ,imag;
	public:
		complex():real(0),imag(0){}
		complex(int r, int i):real(r),imag(i){
			cout<<"Parameterized constructor is called :-"<<real<<" + "<<imag<<"i"<<endl;
		}
	~complex(){	
	cout<<"Desstructor is called :-"<<real<<" + "<<imag<<"i"<<endl;
		}
		
	};
	int main(){
		complex c1(1,2);
		{
			complex c2(2,3);
		}
		complex c3(4,2);
		return 0;
	}
