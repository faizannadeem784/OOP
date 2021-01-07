#include<iostream>
using namespace std;
class calculator{
	private:
	int size,num1,num2;
	float array[1000],sum=0,product=1,division,minus;
	public:
	int get()
	{
		cout<<endl<<"How size you want to declare in Array=";
		cin>>size;
		for(int i=0;i<size;++i)
		{
			cout<<i+1<<". Enter the number=";
			cin>>array[i];
		}
		
	}
	calculator operator+()
	{
		for(int i=0;i<size;i++)
		{
			sum+=array[i];
			cout<<array[i]<<"+";
		}
		cout<<"\b  = "<<sum;
	}
	calculator operator-()
	{
		for(int i=0;i<size;++i)
		{
			minus-=array[i];
			cout<<array[i]<<"-";
		}
		cout<<"\b  = "<<minus;
	}
	calculator operator*()
	{
		for(int i=0;i<size;++i)
		{
			product*=array[i];
			//cout<<endl<<product;
			cout<<array[i]<<"*";
		}
		cout<<"\b  ="<<product;
	}
	int get_division()
	{
		cout<<endl<<"Enter the Neuminator";
		cin>>num1;
		cout<<endl<<"Enter the Denominator";
		cin>>num2;
		while(num2==0||num1>num2)
		{
			cout<<endl<<"Please enter the valid Number\nYour neuminator is small\nEnter the Neuminator again";
			cin>>num2;
		}
	}
	calculator operator/(int a)
	{
		division=num1/num2;
		cout<<num1<<"/"<<num2<<"="<<division;
	}
};
int main()
{
	char x;
	int num;
	calculator obj;
	do
	{
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
				obj.get();
				obj.operator+();
				break;	
			}
			case 2:
			{
				obj.get();
				obj.operator-();
				break;
			}
			case 3:
				{
					obj.get();
					obj.operator*();
					break;	
				}
			case 4:
			{
				obj.get_division();
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
