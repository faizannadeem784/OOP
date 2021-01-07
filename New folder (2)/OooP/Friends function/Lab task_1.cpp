#include <iostream>
using namespace std;
class complex
{
	int real,imag;
public:
	complex (int r=0,int i=0)
	{
		real=r;
		imag=i;
	}
	complex operator+(complex const &obj)
	{
		complex com;
		com.real=real+obj.real;
		com.imag=imag+obj.imag;
		return com;
	}
	int print()
	{
		cout<<"\nComplex Number :"<<real<<"+"<<imag<<"i"<<"\n";
	}
};
int main()
{
	int num1,num2,num3,num4;
	cout<<"Enter the 1st real number:";
	cin>>num1;
	cout<<"Enter 2nd real number:";
	cin>>num2;
	cout<<"Enter 1st imaginary number:";
	cin>>num3;
	cout<<"Enter 2nd imaginary number:";
	cin>>num4;
	complex c1(num1,num3),c2(num2,num4);
	complex c3=c1+c2;
	c3.print();
}
