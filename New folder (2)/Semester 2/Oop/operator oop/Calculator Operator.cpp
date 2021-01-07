#include<iostream>
using namespace std;
class Calculator{
	private:
	int num1,num2,size;
	float array[1000],sum=0,subtract=0,product=1,division;
	public:
	void get()
	{
		cout<<endl<<"Enter the 1st Number=";
		cin>>num1;
		cout<<endl<<"Enter the 2nd Number=";
		cin>>num2;
	}
	void Array()
	{
		cout<<endl<<"How many size you want to declare";
		cin>>size;
		for(int i=0;i<size;i++)
		{
			cout<<i+1<<".Enter the number=";
			cin>>array[i];
		}
	}
	Calculator operator+()
	{
		for(int i=0;i<size;i++)
		{
			sum+=array[i];
			cout<<array[i]<<"+";
		}
		cout<<"\b="<<sum;
	}
	Calculator operator-()
	{
		for(int i=0;i<size;++i)
		{
			subtract-=array[i];
			cout<<array[i]<<"-";
		}
		cout<<"\b="<<subtract;
	}
	Calculator operator*()
	{
		for(int i=0;i<size;++i)
		{
			product*=array[i];
			cout<<array[i]<<"*";
		}
		cout<<"\b="<<product;
	}
	Calculator operator/(int a)
	{
		division=num1/num2;
		cout<<endl<<"The Division="<<division;
	}
};
int main()
{
	Calculator obj;
	char x;
	int num;
	do{
		cout<<endl<<"\t\t\t\t*************FAIZAN_NADEEM***************";
		cout<<endl<<"\t\t\t\t**********Welcome to my Calculator**********";
		cout<<endl<<"\tpress 1.for Addition:";
		cout<<endl<<"\tpress 2.for Subtraction:";
		cout<<endl<<"\tpress 3.for Multiplication:";
		cout<<endl<<"\tpress 4.for Division:";
		cout<<endl<<"***********************************************************************************************************************\n";
		cin>>num;
		switch(num)
		{
			case 1:
			{
				obj.Array();
				obj.operator+();
				break;	
			}
			case 2:
			{
				obj.Array();
				obj.operator-();
				break;
			}
			case 3:
				{
					obj.Array();
					obj.operator*();
					break;	
				}
			case 4:
			{
				obj.get();
				obj.operator/(1);
				break;
			}	
			default:
			{
				cout<<endl<<"Invalid number";
			}
		}
			cout<<endl<<"Do you want to use calculator Again(Y or N)";
			cin>>x;
	}
	while(x=='Y'||x=='y');
	cout<<endl<<"**********Thanks for using Calculator**********";
}


