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
	complex operator+(int complex obj)
	{
		complex com;
		com.real=real+obj.real;
		com.imag=imag+obj.imag;
		return com;
	}
	int print()
	{
		cout<<"\n\nComplex Number :  "<<real<<" + "<<imag<<"i"<<"\n";
	}
};
int main()
{
	int no1,no2,no3,no4;
	cout<<"Enter 1st   real   number  :  ";
	cin>>no1;
	cout<<"Enter 2nd   real   number  :  ";
	cin>>no2;
	cout<<"Enter 1st imaginary number :  ";
	cin>>no3;
	cout<<"Enter 2nd imaginary number :  ";
	cin>>no4;
	complex c1(no1,no3),c2(no2,no4);
	complex c3=c1+c2;
	c3.print();
}
