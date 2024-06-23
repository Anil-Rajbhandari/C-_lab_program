#include<iostream>
using namespace std;
struct complex{
	float real, imag;
};
complex add_complex(complex num_1,complex num_2){
	complex sum;
	sum.real=num_1.real+ num_2.real;
	sum.imag=num_1.imag+ num_2.imag;
	return sum;
}

complex display_complex(complex sum){
	cout<<"The sum of two complex number is "<<sum.real<<"+"<<sum.imag<<"i";
}
int main(){
	complex x,y,sum;
	cout<<"Enter the real and imaginary part of 1st complex number:-";
	cin>>x.real>>x.imag;
	cout<<"Enter the real and imaginary part of 2nd complex number:-";
	cin>>y.real>>y.imag;
	sum =add_complex(x,y);
	display_complex(sum);
	return 0;
}
