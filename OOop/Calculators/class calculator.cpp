#include<iostream>
using namespace std;
class calculator{
private:
int x,y;
public:
void add(int x,int y)
{
	
	cout<<endl<<"Your addition is="<<x+y;

}

void subtract(int x,int y)
{
	cout<<endl<<"Your subtraction is="<<x-y;

}

void mult(int x,int y)
{
	cout<<endl<<"Your multilication is="<<x*y;

}

void divi(int x,int y)
{
	cout<<endl<<"Your division is="<<x/y;

}
		
};
int main()
{
	
	int x,y,z;
	cout<<endl<<"Enter 1st number";
	cin>>x;
	cout<<endl<<"Enter 2nd number";
	cin>>y;
	cout<<endl<<"Press 1.for addition\n2.for division\n3.for multiplication\n4.for subtraction";
	cin>>z;
	
	calculator rect;
	//rect.set_values();
	if(z==1)
	{
		
		rect.add(x,y);
	}
	else if(z==2)
	{
		rect.divi(x,y);
	}
	else if(z==3)
	{
		rect.mult(x,y);
	}
	else if(z==4)
	{
		rect.subtract(x,y);
	}
	else
	{
		cout<<endl<<"invaalid number";
	}
}
