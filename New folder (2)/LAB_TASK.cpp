#include<iostream>
using namespace std;
class Shape{
	public:
	float width,height;
	virtual void compute_area()
	{
			
	}	
};
class Triangle:public Shape
{
	public:
	Triangle(float a,float b)
	{
		width=a;
		height=b;	
	}
	void compute_area()	
	{
		cout<<endl<<"**************************************************";
		cout<<endl<<"\t\t\t*****The Area of a Triangle*****="<<0.5*width*height;
		cout<<endl<<"**************************************************";
	}
};
class Rectangle:public Shape
{
	public:
	Rectangle(float a,float b)
	{
		width=a;
		height=b;	
	}	
	void compute_area()
	{
		cout<<endl<<"**************************************************";
		cout<<endl<<"\t\t\t*****The Area of a Rectangle*****="<<width*height;
		cout<<endl<<"**************************************************";
	}
};
int main()
{
	float num1,num2;
	cout<<endl<<"**************************************************";
	cout<<endl<<"Enter the 1st number= ";
	cin>>num1;
	cout<<endl<<"Enter the 2nd number= ";
	cin>>num2;
	cout<<endl<<"**************************************************";
	Shape *S;
	Triangle T=Triangle(num1,num2);
	S=&T;
	S->compute_area();
	Rectangle R=Rectangle(num1,num2);
	S=&R;
	S->compute_area();
	}
