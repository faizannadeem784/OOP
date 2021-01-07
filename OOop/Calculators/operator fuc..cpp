#include<iostream>
using namespace std;
class calculator{
	private:
		int size,num1,num2,num3;
		float array[1000],sum=0,product=1,division,minus=0,factorial;
		public:
			void get_input()
			{
				cout<<endl<<"How mant size you want to declare=";
				cin>>size;
				for(int i=0;i<size;++i)
				{
					cout<<endl<<i+1<<". Enter the Number:";
					cin>>array[i];
				}
			}
			void division_input()
			{
				while(num1==0||num2==0||num1<num2)
				{
					cout<<endl<<"Enter the 1st nummber=";
					cin>>num1;
					cout<<endl<<"Enter the 2nd number=";
					cin>>num2;
				}
				cout<<endl<<"Your neuminator is smaller Or you Enter zero Invalid Character";
			}
			void reamainder_get()
			{
				cout<<endl<<"Enter the 1st number=";
				cin>>num1;
				cout<<endl<<"Enter the 1st number=";
				cin>>num1;
			}
			void even_odd_get()
			{
				cout<<endl<<"Enter the number to check Even Odd=";
				cin>>num1;
			}
			void fictorial_get()
			{
				cout<<"Enter the number of the factorial=";
				cin>>num1;
			}
			void table_get()
			{
				cout<<"\nEnter the number of the table=";
				cin>>num1;
				cout<<"\nEnter the number of the table where you want to start=";
				cin>>num2;
				cout<<"\nEnter the number of the table where you want to terminate=";
				cin>>num3;
			}
			calculator operator+()
			{
				for(int i=0;i<size;++i)
				{
					sum+=array[i];
					cout<<array[i]<<"+";
				}
				cout<<"\b ="<<sum;
			}
			calculator operator-()
			{
				for(int i=0;i<size;++i)
				{
					minus-=array[i];
					cout<<array[i]<<"-";
				}
				cout<<"\b ="<<minus;
			}
			calculator operator*()
			{
				for(int i=0;i<size;++i)
				{
					product*=array[i];
					cout<<array[i]<<"*";
				}
				cout<<"\b ="<<product;
			}
			calculator operator/(int a)
			{
				division=num1/num2;
				cout<<endl<<num1<<"/"<<num2<<"="<<division;
			}
			calculator operator%(int a)
			{
				cout<<endl<<num1<<"%"<<num2<<"="<<num1%num2;
			}
			void even_odd()
			{
				if(num1%2==0)
				{
					cout<<endl<<num1<<" is an Even number";
				}
				else
				{
					cout<<endl<<num1<<" is an Odd number";
				}
			}
void tablee()
	{
	//	int no,start,end;
	while(num2<=num3)
	{
		cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
		num2++;
	}
	}
void fictorial()
{
	//int no,factorial;
	
	factorial=num1;
	for(int i=num1-1;i>=1;--i)
	{
		cout<<factorial<<"*"<<i<<"="<<factorial*i<<endl;
		factorial*=i;
	}
	cout<<"The number of the factorial is="<<factorial;
}

};
int main()
{
	char x;
	int num;
	calculator cal;
	do
	{
		cout<<endl<<"\t\t\t\t**********Welcome to my Calculator**********";
		cout<<endl<<"\tpress 1.for Addition:*****************************::";
		cout<<endl<<"\tpress 2.for Subtraction:**************************::";
		cout<<endl<<"\tpress 3.for Multiplication:***********************::";
		cout<<endl<<"\tpress 4.for Division:*****************************::";
		cout<<endl<<"\tpress 5.for Remainder:****************************::";
		cout<<endl<<"\tpress 6.for check Even Odd number*****************::";
		cout<<endl<<"\tpress 7.for Table*********************************::";
		cout<<endl<<"\tpress 8.for Factorial*****************************::";
		cout<<endl<<"***********************************************************************************************************************\n";
		cin>>num;
		switch(num)
		{
			case 1:
			{
				cal.get_input();
				cal.operator+();
				break;
			}
			case 2:
			{
				cal.get_input();
				cal.operator-();
				break;
			}
			case 3:
			{
				cal.get_input();
				cal.operator*();
				break;
			}
			case 4:
			{
				cal.division_input();
				cal.operator/(1);
				break;
			}
			case 5:
			{
				cal.reamainder_get();
				cal.operator%(1);
				break;	
			}	
			case 6:
			{
				cal.even_odd_get();
				cal.even_odd();
				break;		
			}
			case 7:
			{
				cal.table_get();
				cal.tablee();
				break;
			}
			case 8:
			{
				cal.fictorial_get();
				cal.fictorial();
				break;		
			}
			default:
			{
				cout<<endl<<"**********Invalid Number**********";
				cout<<"****************************************";
			}	
		}
		cout<<endl<<"**********-_-***Do you want to use Calculator Again(Y||N)=**********-_-***";
		cin>>x;
	}
	while(x=='Y'||x=='y');
	cout<<endl<<"**********Thanks for using Calculator**********";
}
