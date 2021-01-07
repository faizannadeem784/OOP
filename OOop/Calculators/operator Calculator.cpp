#include<iostream>
using namespace std;
class calculator{
	private:
	int num1,num2,division;
	public:
		int input()
		{
			cout<<endl<<"Enter the 1st number";
			cin>>num1;
			cout<<endl<<"Enter the 2nd number";
			cin>>num2;
		}
		calculator operator+()
		{
			cout<<endl<<num1<<"+"<<num2<<"="<<num1+num2;
		}
		calculator operator-()
		{
			cout<<endl<<num1<<"-"<<num2<<"="<<num1-num2;
		}
		calculator operator*()
		{
			cout<<endl<<num1<<"*"<<num2<<"="<<num1*num2;
		}
		int division_get()
		{
		while(num1==0||num1<num2)
			cout<<endl<<"Enter the 1st number=";
			cin>>num1;
			cout<<endl<<"Enter the 2nd number=";
			cin>>num2;
			{
				cout<<endl<<"Error:Please enter the valid number";
			}
		}
		calculator operator/(int a)
		{
			division=num1/num2;
			cout<<endl<<num1<<"/"<<num2<<"="<<division;
		}
};
int main()
{
	int num;
	char x;
	calculator cal;
	do
	{
		cout<<endl<<"\t\t\t\tWelcome to my Calculator";
		cout<<endl<<"press 1.for Addition:";
		cout<<endl<<"press 2.for Subtraction:";
		cout<<endl<<"press 3.for Multiplication:";
		cout<<endl<<"press 4.for Division:";
		cin>>num;
		switch(num)
		{
			case 1:
			{
				cal.input();
				cal.operator+();
				break;
			}	
			case 2:
			{
				cal.input();
				cal.operator-();
				break;
			}
			case 3:
			{
				cal.input();
				cal.operator*();
				break;
			}	
			case 4:
			{
				cal.division_get();
				cal.operator/(1);		
				break;
			}
			default:
			{
					cout<<endl<<"Invalid Number";
			}
	}
		cout<<endl<<"Do you want to use the calculator again(Y ro n)";
		cin>>x;
	}
	while(x=='y'||x=='Y');
}
