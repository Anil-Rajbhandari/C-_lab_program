#include<iostream>
using namespace std;

class complex{
	int real ,imag;
	public:
		complex():real(0),imag(0){
			cout<<"Default constructor is called :-"<<real<<" + "<<imag<<"i"<<endl;
		}
			complex(int r, int i):real(r),imag(i){
			cout<<"Parameterized constructor is called :-"<<real<<" + "<<imag<<"i"<<endl;
		}
			complex(complex &c):real(c.real),imag(c.imag){
			cout<<"Copy constructor is called :-"<<real<<" + "<<imag<<"i"<<endl;
		}
		~complex(){
			cout<<"Desstructor is called :-"<<real<<" + "<<imag<<"i"<<endl;
		}
		void display(){
			cout<<real<<" + "<<imag<<"i"<<endl;
		}
};
int main()
{
	complex c1;
	c1.display();
	complex c2(3,4);
	c2.display();
	complex c3(c2);
	c3.display();
	return 0;
	
}
