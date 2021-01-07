#include<iostream>
using namespace std;
class cal{
	public:
	int num1,num2,num3;
	int add(int a,int b)
	{
		num1=a;
		num2=b;
		return num1+num2;
	}	
	int add(int a,int b,int c)
	{
		num1=a;
		num2=b;
		num3=c;
		return num1+num2+num3;
	}
	
};
int main()
{
	cal C;
	cout<<C.add(12,5);
	cout<<endl<<C.add(11,5,8);
}

	

